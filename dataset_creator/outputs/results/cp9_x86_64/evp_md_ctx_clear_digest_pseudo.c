
void evp_md_ctx_clear_digest(EVP_MD_CTX *param_1,int param_2,int param_3)

{
  code *pcVar1;
  
  if (param_1[1].engine != (ENGINE *)0x0) {
    if ((param_1->engine != (ENGINE *)0x0) &&
       (pcVar1 = *(code **)(param_1->engine + 0xb0), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
    param_1[1].engine = (ENGINE *)0x0;
    EVP_MD_CTX_set_flags(param_1,2);
  }
  cleanup_old_md_data(param_1,param_2);
  if (param_2 != 0) {
    param_1->engine = (ENGINE *)0x0;
  }
  ENGINE_finish((ENGINE *)param_1->flags);
  param_1->flags = 0;
  if (param_3 != 0) {
    return;
  }
  EVP_MD_free(param_1[1].flags);
  param_1[1].flags = 0;
  param_1->digest = (EVP_MD *)0x0;
  return;
}

