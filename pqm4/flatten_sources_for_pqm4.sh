#!/bin/zsh

FIAT_CRYPTO_SOURCES=("fp_p1913_32.c" "" "fp_p47441_32.c" "" "fp_p318233_32.c")
ARITHMETIC=fiat_crypto

for LEVEL in 1 3 5
do
    LVL=lvl${LEVEL}
    DST_PATH=sqisign${LEVEL}_nist/${ARITHMETIC}

    if [ -d ${DST_PATH} ]; then
        echo Destination folder already exists. Delete it before running this script. Aborting.
        exit 1
    fi

    mkdir -p ${DST_PATH}

    cp include/*.h ${DST_PATH}/
    cp src/sqisign.c ${DST_PATH}/

    cp src/mini-gmp/*.c ${DST_PATH}/
    cp src/mini-gmp/*.h ${DST_PATH}/
    cp src/intbig/ref/generic/{include/intbig.h,intbig.c} ${DST_PATH}/

    cp pqm4/${LVL}/pqm4_api.c ${DST_PATH}/
    cp src/nistapi/${LVL}/*.h ${DST_PATH}/

    for FILE in mem.c include/tutil.h
    do
        cp src/common/generic/${FILE} ${DST_PATH}/
    done

    for FILE in include/klpt.h klptx/eichler.c klptx/equiv.c klptx/klpt.c klptx/tools.c klptx/tools.h
    do
        cp src/klpt/ref/${FILE} ${DST_PATH}/
    done

    for FILE in include/ec_params.h include/encoded_sizes.h include/endomorphism_action.h include/fp_constants.h \
                include/klpt_constants.h include/quaternion_data.h include/torsion_constants.h endomorphism_action.c \
                klpt_constants.c quaternion_data.c torsion_constants.c
    do
        cp src/precomp/ref/${LVL}/${FILE} ${DST_PATH}/
    done

    ARITH_FLAG="ARITH_REF"

    cp src/gf/ref/${LVL}/include/*.h ${DST_PATH}/
    cp src/gf/ref/${LVL}/${FIAT_CRYPTO_SOURCES[${LEVEL}]} ${DST_PATH}/
    cp src/gf/ref/${LVL}/fp.c ${DST_PATH}/
    cp src/gf/ref/${LVL}/fp2.c ${DST_PATH}/

    echo "elf/mupq_crypto_sign_sqisign${LEVEL}_nist_${ARITHMETIC}_%.elf: CPPFLAGS+=-DRADIX_32 -DENABLE_MINI_GMP -Wno-unused-variable -Wno-unused-parameter -Wno-sign-compare -Wno-unused-function" > ${DST_PATH}/config.mk
    echo "obj/libmupq_crypto_sign_sqisign${LEVEL}_nist_${ARITHMETIC}.a: CPPFLAGS+=-DRADIX_32 -DENABLE_MINI_GMP -Wno-unused-variable -Wno-unused-parameter -Wno-sign-compare -Wno-unused-function" >> ${DST_PATH}/config.mk

    for FILE in ecx/basis.c ecx/ec.c ecx/isog_chains.c ecx/kps.c ecx/poly-mul.c ecx/poly-redc.c ecx/xeval.c \
                ecx/xisog.c include/curve_extras.h include/ec.h include/isog.h include/poly.h include/sdacs.h \
                include/tedwards.h
    do
        cp src/ec/ref/$FILE ${DST_PATH}/
    done

    cp src/id2iso/ref/id2isox/*.c ${DST_PATH}/
    cp src/id2iso/ref/include/*.h ${DST_PATH}/

    for FILE in encode.c keygen.c verif.c sign.c
    do
        cp src/protocols/ref/protocolsx/${FILE} ${DST_PATH}/
    done
    cp src/protocols/ref/include/*.h ${DST_PATH}/

    for FILE in include/quaternion.h algebra.c dim2.c dim4.c finit.c ideal.c integers.c internal.h lattice.c lll.c \
                matkermod.c
    do
        cp src/quaternion/ref/generic/${FILE} ${DST_PATH}/
    done
done
