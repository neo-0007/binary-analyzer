
undefined1 * EVP_PKEY_meth_get0(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  switch(param_1) {
  case 0:
    return rsa_pkey_meth;
  case 1:
    return dh_pkey_meth;
  case 2:
    return dsa_pkey_meth;
  case 3:
    return ec_pkey_meth;
  case 4:
    return rsa_pss_pkey_meth;
  case 5:
    return dhx_pkey_meth;
  case 6:
    return ecx25519_pkey_meth;
  case 7:
    return ecx448_pkey_meth;
  case 8:
    return ed25519_pkey_meth;
  case 9:
    return ed448_pkey_meth;
  }
  if (app_pkey_methods == 0) {
    return (undefined1 *)0x0;
  }
  iVar1 = OPENSSL_sk_num(app_pkey_methods);
  if ((ulong)(long)iVar1 <= param_1 - 10U) {
    return (undefined1 *)0x0;
  }
  puVar2 = (undefined1 *)OPENSSL_sk_value(app_pkey_methods,param_1 - 10U & 0xffffffff);
  return puVar2;
}

