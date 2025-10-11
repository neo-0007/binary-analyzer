
int ENGINE_register_RSA(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x10) == 0) {
    return 1;
  }
  iVar1 = engine_table_register(&rsa_table,engine_unregister_all_RSA,e,&dummy_nid,1,0);
  return iVar1;
}

