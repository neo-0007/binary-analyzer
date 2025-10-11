
int ENGINE_register_DH(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x20) == 0) {
    return 1;
  }
  iVar1 = engine_table_register(&dh_table,engine_unregister_all_DH,e,&dummy_nid,1,0);
  return iVar1;
}

