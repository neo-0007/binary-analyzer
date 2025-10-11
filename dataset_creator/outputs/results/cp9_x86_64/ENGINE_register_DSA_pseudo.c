
int ENGINE_register_DSA(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x18) == 0) {
    return 1;
  }
  iVar1 = engine_table_register(&dsa_table,engine_unregister_all_DSA,e,&dummy_nid,1,0);
  return iVar1;
}

