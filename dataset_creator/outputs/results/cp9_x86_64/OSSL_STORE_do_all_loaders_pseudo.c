
undefined8 OSSL_STORE_do_all_loaders(undefined8 param_1,undefined8 param_2)

{
  if (loader_register == 0) {
    loader_register = OPENSSL_LH_new(store_loader_hash,store_loader_cmp);
    if (loader_register == 0) {
      return 1;
    }
  }
  OPENSSL_LH_doall_arg(loader_register,param_1,param_2);
  return 1;
}

