
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ENGINE * ENGINE_get_default_RAND(void)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)ossl_engine_table_select(&rand_table,1,"../crypto/engine/tb_rand.c",0x3e);
  return pEVar1;
}

