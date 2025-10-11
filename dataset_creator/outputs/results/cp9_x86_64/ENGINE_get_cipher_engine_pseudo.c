
ENGINE * ENGINE_get_cipher_engine(int nid)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)ossl_engine_table_select(&cipher_table,nid,"../crypto/engine/tb_cipher.c",0x45)
  ;
  return pEVar1;
}

