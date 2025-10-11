
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ENGINE * ENGINE_get_default_DSA(void)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)ossl_engine_table_select(&dsa_table,1,"../crypto/engine/tb_dsa.c",0x3e);
  return pEVar1;
}

