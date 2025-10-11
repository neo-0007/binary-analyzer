
undefined8 ENGINE_set_default_EC(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return 1;
  }
  uVar1 = engine_table_register(&dh_table,engine_unregister_all_EC,param_1,&dummy_nid,1,1);
  return uVar1;
}

