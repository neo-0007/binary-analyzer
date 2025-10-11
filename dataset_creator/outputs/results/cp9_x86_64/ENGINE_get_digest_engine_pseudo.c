
ENGINE * ENGINE_get_digest_engine(int nid)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)ossl_engine_table_select(&digest_table,nid,"../crypto/engine/tb_digest.c",0x45)
  ;
  return pEVar1;
}

