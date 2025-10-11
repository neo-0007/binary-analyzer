
void engine_load_openssl_int(void)

{
  int iVar1;
  ENGINE *e;
  RSA_METHOD *rsa_meth;
  DSA_METHOD *dsa_meth;
  undefined8 uVar2;
  DH_METHOD *dh_meth;
  RAND_METHOD *rand_meth;
  
  e = ENGINE_new();
  if (e == (ENGINE *)0x0) {
    return;
  }
  iVar1 = ENGINE_set_id(e,"openssl");
  if (iVar1 != 0) {
    iVar1 = ENGINE_set_name(e,"Software engine support");
    if (iVar1 != 0) {
      iVar1 = ENGINE_set_destroy_function(e,openssl_destroy);
      if (iVar1 != 0) {
        rsa_meth = RSA_get_default_method();
        iVar1 = ENGINE_set_RSA(e,rsa_meth);
        if (iVar1 != 0) {
          dsa_meth = DSA_get_default_method();
          iVar1 = ENGINE_set_DSA(e,dsa_meth);
          if (iVar1 != 0) {
            uVar2 = EC_KEY_OpenSSL();
            iVar1 = ENGINE_set_EC(e,uVar2);
            if (iVar1 != 0) {
              dh_meth = DH_get_default_method();
              iVar1 = ENGINE_set_DH(e,dh_meth);
              if (iVar1 != 0) {
                rand_meth = (RAND_METHOD *)RAND_OpenSSL();
                iVar1 = ENGINE_set_RAND(e,rand_meth);
                if (iVar1 != 0) {
                  iVar1 = ENGINE_set_ciphers(e,openssl_ciphers);
                  if (iVar1 != 0) {
                    iVar1 = ENGINE_set_digests(e,openssl_digests);
                    if (iVar1 != 0) {
                      iVar1 = ENGINE_set_load_privkey_function(e,openssl_load_privkey);
                      if (iVar1 != 0) {
                        ERR_set_mark();
                        ENGINE_add(e);
                        ENGINE_free(e);
                        ERR_pop_to_mark();
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ENGINE_free(e);
  return;
}

