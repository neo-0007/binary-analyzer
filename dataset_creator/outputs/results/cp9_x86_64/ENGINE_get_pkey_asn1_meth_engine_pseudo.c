
ENGINE * ENGINE_get_pkey_asn1_meth_engine(int nid)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)
           ossl_engine_table_select(&pkey_asn1_meth_table,nid,"../crypto/engine/tb_asnmth.c",0x50);
  return pEVar1;
}

