
undefined8 def_dump(long param_1,undefined8 param_2)

{
  OPENSSL_LH_doall_arg(*(undefined8 *)(param_1 + 0x10),dump_value_doall_arg,param_2);
  return 1;
}

