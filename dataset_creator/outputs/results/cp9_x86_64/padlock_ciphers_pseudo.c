
undefined8 padlock_ciphers(undefined8 param_1,long *param_2,undefined8 *param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  
  lVar15 = _hidden_aes_128_ecb;
  lVar14 = _hidden_aes_128_cbc;
  lVar13 = _hidden_aes_128_cfb;
  lVar12 = _hidden_aes_128_ofb;
  lVar11 = _hidden_aes_128_ctr;
  lVar10 = _hidden_aes_192_ecb;
  lVar9 = _hidden_aes_192_cbc;
  lVar8 = _hidden_aes_192_cfb;
  lVar7 = _hidden_aes_192_ofb;
  lVar6 = _hidden_aes_192_ctr;
  lVar5 = _hidden_aes_256_ecb;
  lVar4 = _hidden_aes_256_cbc;
  lVar3 = _hidden_aes_256_cfb;
  lVar2 = _hidden_aes_256_ofb;
  lVar1 = _hidden_aes_256_ctr;
  if (param_2 == (long *)0x0) {
    *param_3 = padlock_cipher_nids;
    return 0xf;
  }
  if (param_4 < 0x1ae) {
    if (param_4 < 0x1a2) {
LAB_00437a48:
      *param_2 = 0;
      return 0;
    }
    switch(param_4) {
    case 0x1a3:
      lVar17 = lVar14;
      if ((_hidden_aes_128_cbc == 0) &&
         ((((_hidden_aes_128_cbc = EVP_CIPHER_meth_new(0x1a3,0x10,0x10), _hidden_aes_128_cbc == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_128_cbc,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_128_cbc,2), iVar16 == 0)) ||
          (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_128_cbc,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_128_cbc,padlock_cbc_cipher),
            iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_128_cbc,0x124), iVar16 == 0 ||
            ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                 (_hidden_aes_128_cbc,EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                 (_hidden_aes_128_cbc,EVP_CIPHER_get_asn1_iv),
             lVar17 = _hidden_aes_128_cbc, iVar16 == 0)))))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_128_cbc);
        _hidden_aes_128_cbc = 0;
        lVar17 = lVar14;
      }
      break;
    case 0x1a4:
      lVar17 = lVar12;
      if ((_hidden_aes_128_ofb == 0) &&
         ((((_hidden_aes_128_ofb = EVP_CIPHER_meth_new(0x1a4,1,0x10), _hidden_aes_128_ofb == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_128_ofb,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_128_ofb,4), iVar16 == 0)) ||
          (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_128_ofb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_128_ofb,padlock_ofb_cipher),
            iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_128_ofb,0x124), iVar16 == 0 ||
            ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                 (_hidden_aes_128_ofb,EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                 (_hidden_aes_128_ofb,EVP_CIPHER_get_asn1_iv),
             lVar17 = _hidden_aes_128_ofb, iVar16 == 0)))))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_128_ofb);
        _hidden_aes_128_ofb = 0;
        lVar17 = lVar12;
      }
      break;
    case 0x1a5:
      lVar17 = lVar13;
      if ((_hidden_aes_128_cfb == 0) &&
         (((((_hidden_aes_128_cfb = EVP_CIPHER_meth_new(0x1a5,1,0x10), _hidden_aes_128_cfb == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_128_cfb,0x10), iVar16 == 0)) ||
            (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_128_cfb,3), iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_128_cfb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_128_cfb,padlock_cfb_cipher),
            iVar16 == 0)))) ||
          ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_128_cfb,0x124), iVar16 == 0 ||
           ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                (_hidden_aes_128_cfb,EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                (_hidden_aes_128_cfb,EVP_CIPHER_get_asn1_iv),
            lVar17 = _hidden_aes_128_cfb, iVar16 == 0)))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_128_cfb);
        _hidden_aes_128_cfb = 0;
        lVar17 = lVar13;
      }
      break;
    case 0x1a6:
      lVar17 = lVar10;
      if ((_hidden_aes_192_ecb == 0) &&
         ((((_hidden_aes_192_ecb = EVP_CIPHER_meth_new(0x1a6,0x10,0x18), _hidden_aes_192_ecb == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_192_ecb,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_192_ecb,1), iVar16 == 0)) ||
          (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_192_ecb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_192_ecb,padlock_ecb_cipher),
            iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_192_ecb,0x124), iVar16 == 0 ||
            ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                 (_hidden_aes_192_ecb,EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                 (_hidden_aes_192_ecb,EVP_CIPHER_get_asn1_iv),
             lVar17 = _hidden_aes_192_ecb, iVar16 == 0)))))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_192_ecb);
        _hidden_aes_192_ecb = 0;
        lVar17 = lVar10;
      }
      break;
    case 0x1a7:
      lVar17 = lVar9;
      if ((_hidden_aes_192_cbc == 0) &&
         ((((_hidden_aes_192_cbc = EVP_CIPHER_meth_new(0x1a7,0x10,0x18), _hidden_aes_192_cbc == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_192_cbc,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_192_cbc,2), iVar16 == 0)) ||
          (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_192_cbc,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_192_cbc,padlock_cbc_cipher),
            iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_192_cbc,0x124), iVar16 == 0 ||
            ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                 (_hidden_aes_192_cbc,EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                 (_hidden_aes_192_cbc,EVP_CIPHER_get_asn1_iv),
             lVar17 = _hidden_aes_192_cbc, iVar16 == 0)))))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_192_cbc);
        _hidden_aes_192_cbc = 0;
        lVar17 = lVar9;
      }
      break;
    case 0x1a8:
      lVar17 = lVar7;
      if ((_hidden_aes_192_ofb == 0) &&
         ((((((_hidden_aes_192_ofb = EVP_CIPHER_meth_new(0x1a8,1,0x18), _hidden_aes_192_ofb == 0 ||
              (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_192_ofb,0x10), iVar16 == 0)) ||
             (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_192_ofb,4), iVar16 == 0)) ||
            ((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_192_ofb,padlock_aes_init_key),
             iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_192_ofb,padlock_ofb_cipher),
             iVar16 == 0)))) ||
           (iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_192_ofb,0x124), iVar16 == 0)) ||
          ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params(_hidden_aes_192_ofb,EVP_CIPHER_set_asn1_iv)
           , iVar16 == 0 ||
           (iVar16 = EVP_CIPHER_meth_set_get_asn1_params(_hidden_aes_192_ofb,EVP_CIPHER_get_asn1_iv)
           , lVar17 = _hidden_aes_192_ofb, iVar16 == 0)))))) {
        EVP_CIPHER_meth_free(_hidden_aes_192_ofb);
        _hidden_aes_192_ofb = 0;
        lVar17 = lVar7;
      }
      break;
    case 0x1a9:
      lVar17 = lVar8;
      if ((_hidden_aes_192_cfb == 0) &&
         ((((_hidden_aes_192_cfb = EVP_CIPHER_meth_new(0x1a9,1,0x18), _hidden_aes_192_cfb == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_192_cfb,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_192_cfb,3), iVar16 == 0)) ||
          (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_192_cfb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_192_cfb,padlock_cfb_cipher),
            iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_192_cfb,0x124), iVar16 == 0 ||
            ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                 (_hidden_aes_192_cfb,EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                 (_hidden_aes_192_cfb,EVP_CIPHER_get_asn1_iv),
             lVar17 = _hidden_aes_192_cfb, iVar16 == 0)))))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_192_cfb);
        _hidden_aes_192_cfb = 0;
        lVar17 = lVar8;
      }
      break;
    case 0x1aa:
      lVar17 = lVar5;
      if ((_hidden_aes_256_ecb == 0) &&
         ((((_hidden_aes_256_ecb = EVP_CIPHER_meth_new(0x1aa,0x10,0x20), _hidden_aes_256_ecb == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_256_ecb,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_256_ecb,1), iVar16 == 0)) ||
          (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_256_ecb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_256_ecb,padlock_ecb_cipher),
            iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_256_ecb,0x124), iVar16 == 0 ||
            ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                 (_hidden_aes_256_ecb,EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                 (_hidden_aes_256_ecb,EVP_CIPHER_get_asn1_iv),
             lVar17 = _hidden_aes_256_ecb, iVar16 == 0)))))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_256_ecb);
        _hidden_aes_256_ecb = 0;
        lVar17 = lVar5;
      }
      break;
    case 0x1ab:
      lVar17 = lVar4;
      if ((_hidden_aes_256_cbc == 0) &&
         (((((_hidden_aes_256_cbc = EVP_CIPHER_meth_new(0x1ab,0x10,0x20), _hidden_aes_256_cbc == 0
             || (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_256_cbc,0x10), iVar16 == 0)) ||
            (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_256_cbc,2), iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_256_cbc,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_256_cbc,padlock_cbc_cipher),
            iVar16 == 0)))) ||
          ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_256_cbc,0x124), iVar16 == 0 ||
           ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                (_hidden_aes_256_cbc,EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                (_hidden_aes_256_cbc,EVP_CIPHER_get_asn1_iv),
            lVar17 = _hidden_aes_256_cbc, iVar16 == 0)))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_256_cbc);
        _hidden_aes_256_cbc = 0;
        lVar17 = lVar4;
      }
      break;
    case 0x1ac:
      lVar17 = lVar2;
      if ((_hidden_aes_256_ofb == 0) &&
         (((((_hidden_aes_256_ofb = EVP_CIPHER_meth_new(0x1ac,1,0x20), _hidden_aes_256_ofb == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_256_ofb,0x10), iVar16 == 0)) ||
            (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_256_ofb,4), iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_256_ofb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_256_ofb,padlock_ofb_cipher),
            iVar16 == 0)))) ||
          ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_256_ofb,0x124), iVar16 == 0 ||
           ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                (_hidden_aes_256_ofb,EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                (_hidden_aes_256_ofb,EVP_CIPHER_get_asn1_iv),
            lVar17 = _hidden_aes_256_ofb, iVar16 == 0)))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_256_ofb);
        _hidden_aes_256_ofb = 0;
        lVar17 = lVar2;
      }
      break;
    case 0x1ad:
      lVar17 = lVar3;
      if ((_hidden_aes_256_cfb == 0) &&
         ((((_hidden_aes_256_cfb = EVP_CIPHER_meth_new(0x1ad,1,0x20), _hidden_aes_256_cfb == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_256_cfb,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_256_cfb,3), iVar16 == 0)) ||
          (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_256_cfb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_256_cfb,padlock_cfb_cipher),
            iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_256_cfb,0x124), iVar16 == 0 ||
            ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                 (_hidden_aes_256_cfb,EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
             (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                 (_hidden_aes_256_cfb,EVP_CIPHER_get_asn1_iv),
             lVar17 = _hidden_aes_256_cfb, iVar16 == 0)))))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_256_cfb);
        _hidden_aes_256_cfb = 0;
        lVar17 = lVar3;
      }
      break;
    default:
      lVar17 = lVar15;
      if ((_hidden_aes_128_ecb == 0) &&
         (((((_hidden_aes_128_ecb = EVP_CIPHER_meth_new(0x1a2,0x10,0x10), _hidden_aes_128_ecb == 0
             || (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_128_ecb,0x10), iVar16 == 0)) ||
            (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_128_ecb,1), iVar16 == 0)) ||
           ((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_128_ecb,padlock_aes_init_key),
            iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_128_ecb,padlock_ecb_cipher),
            iVar16 == 0)))) ||
          ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_128_ecb,0x124), iVar16 == 0 ||
           ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params
                                (_hidden_aes_128_ecb,EVP_CIPHER_set_asn1_iv), iVar16 == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_get_asn1_params
                                (_hidden_aes_128_ecb,EVP_CIPHER_get_asn1_iv),
            lVar17 = _hidden_aes_128_ecb, iVar16 == 0)))))))) {
        EVP_CIPHER_meth_free(_hidden_aes_128_ecb);
        _hidden_aes_128_ecb = 0;
        lVar17 = lVar15;
      }
    }
  }
  else if (param_4 == 0x389) {
    lVar17 = lVar6;
    if ((_hidden_aes_192_ctr == 0) &&
       ((((((_hidden_aes_192_ctr = EVP_CIPHER_meth_new(0x389,1,0x18), _hidden_aes_192_ctr == 0 ||
            (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_192_ctr,0x10), iVar16 == 0)) ||
           (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_192_ctr,5), iVar16 == 0)) ||
          ((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_192_ctr,padlock_aes_init_key), iVar16 == 0
           || (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_192_ctr,padlock_ctr_cipher),
              iVar16 == 0)))) ||
         (iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_192_ctr,0x124), iVar16 == 0)) ||
        ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params(_hidden_aes_192_ctr,EVP_CIPHER_set_asn1_iv),
         iVar16 == 0 ||
         (iVar16 = EVP_CIPHER_meth_set_get_asn1_params(_hidden_aes_192_ctr,EVP_CIPHER_get_asn1_iv),
         lVar17 = _hidden_aes_192_ctr, iVar16 == 0)))))) {
      EVP_CIPHER_meth_free(_hidden_aes_192_ctr);
      _hidden_aes_192_ctr = 0;
      lVar17 = lVar6;
    }
  }
  else if (param_4 == 0x38a) {
    lVar17 = lVar1;
    if ((_hidden_aes_256_ctr == 0) &&
       ((((_hidden_aes_256_ctr = EVP_CIPHER_meth_new(0x38a,1,0x20), _hidden_aes_256_ctr == 0 ||
          (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_256_ctr,0x10), iVar16 == 0)) ||
         (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_256_ctr,5), iVar16 == 0)) ||
        (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_256_ctr,padlock_aes_init_key), iVar16 == 0
          || (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_256_ctr,padlock_ctr_cipher),
             iVar16 == 0)) ||
         ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_256_ctr,0x124), iVar16 == 0 ||
          ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params(_hidden_aes_256_ctr,EVP_CIPHER_set_asn1_iv)
           , iVar16 == 0 ||
           (iVar16 = EVP_CIPHER_meth_set_get_asn1_params(_hidden_aes_256_ctr,EVP_CIPHER_get_asn1_iv)
           , lVar17 = _hidden_aes_256_ctr, iVar16 == 0)))))))))) {
      EVP_CIPHER_meth_free(_hidden_aes_256_ctr);
      _hidden_aes_256_ctr = 0;
      lVar17 = lVar1;
    }
  }
  else {
    if (param_4 != 0x388) goto LAB_00437a48;
    lVar17 = lVar11;
    if ((_hidden_aes_128_ctr == 0) &&
       ((((_hidden_aes_128_ctr = EVP_CIPHER_meth_new(0x388,1,0x10), _hidden_aes_128_ctr == 0 ||
          (iVar16 = EVP_CIPHER_meth_set_iv_length(_hidden_aes_128_ctr,0x10), iVar16 == 0)) ||
         (iVar16 = EVP_CIPHER_meth_set_flags(_hidden_aes_128_ctr,5), iVar16 == 0)) ||
        (((iVar16 = EVP_CIPHER_meth_set_init(_hidden_aes_128_ctr,padlock_aes_init_key), iVar16 == 0
          || (iVar16 = EVP_CIPHER_meth_set_do_cipher(_hidden_aes_128_ctr,padlock_ctr_cipher),
             iVar16 == 0)) ||
         ((iVar16 = EVP_CIPHER_meth_set_impl_ctx_size(_hidden_aes_128_ctr,0x124), iVar16 == 0 ||
          ((iVar16 = EVP_CIPHER_meth_set_set_asn1_params(_hidden_aes_128_ctr,EVP_CIPHER_set_asn1_iv)
           , iVar16 == 0 ||
           (iVar16 = EVP_CIPHER_meth_set_get_asn1_params(_hidden_aes_128_ctr,EVP_CIPHER_get_asn1_iv)
           , lVar17 = _hidden_aes_128_ctr, iVar16 == 0)))))))))) {
      EVP_CIPHER_meth_free(_hidden_aes_128_ctr);
      _hidden_aes_128_ctr = 0;
      lVar17 = lVar11;
    }
  }
  *param_2 = lVar17;
  return 1;
}

