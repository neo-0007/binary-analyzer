
int ENGINE_register_RAND(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x30) == 0) {
    return 1;
  }
  iVar1 = engine_table_register(&rand_table,engine_unregister_all_RAND,e,&dummy_nid,1,0);
  return iVar1;
}

