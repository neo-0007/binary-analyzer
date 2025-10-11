
void engine_load_afalg_int(void)

{
  int iVar1;
  ENGINE *e;
  long lVar2;
  undefined4 *puVar3;
  
  iVar1 = afalg_chk_platform();
  if (iVar1 == 0) {
    return;
  }
  e = ENGINE_new();
  if (e == (ENGINE *)0x0) {
    return;
  }
  if (lib_code == 0) {
    lib_code = ERR_get_next_error_library();
  }
  if (error_loaded == 0) {
    ERR_load_strings(lib_code,(ERR_STRING_DATA *)AFALG_str_reasons);
    error_loaded = 1;
  }
  iVar1 = ENGINE_set_id(e,"afalg");
  if ((((iVar1 == 0) || (iVar1 = ENGINE_set_name(e,"AFALG engine support"), iVar1 == 0)) ||
      (iVar1 = ENGINE_set_destroy_function(e,afalg_destroy), iVar1 == 0)) ||
     ((iVar1 = ENGINE_set_init_function(e,afalg_init), iVar1 == 0 ||
      (iVar1 = ENGINE_set_finish_function(e,afalg_finish), iVar1 == 0)))) {
    ERR_AFALG_error_constprop_0(100,0x30d);
  }
  else {
    puVar3 = &afalg_cipher_nids;
    do {
      lVar2 = afalg_aes_cbc(*puVar3);
      if (lVar2 == 0) {
        ERR_AFALG_error_constprop_0(100,0x318);
        goto LAB_0043726e;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined4 *)&DAT_0092e27c);
    iVar1 = ENGINE_set_ciphers(e,afalg_ciphers);
    if (iVar1 != 0) {
      ERR_set_mark();
      ENGINE_add(e);
      ENGINE_free(e);
      ERR_pop_to_mark();
      return;
    }
    ERR_AFALG_error_constprop_0(100,0x31e);
  }
LAB_0043726e:
  ENGINE_free(e);
  return;
}

