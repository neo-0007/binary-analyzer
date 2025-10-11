
ENGINE * ENGINE_get_pkey_meth_engine(int nid)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)
           ossl_engine_table_select(&pkey_meth_table,nid,"../crypto/engine/tb_pkmeth.c",0x46);
  return pEVar1;
}

