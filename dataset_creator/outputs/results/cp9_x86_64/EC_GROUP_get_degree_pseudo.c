
int EC_GROUP_get_degree(EC_GROUP *group)

{
  int iVar1;
  
  if (*(code **)(*(long *)group + 0x38) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004e32a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(long *)group + 0x38))();
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_lib.c",0x25f,"EC_GROUP_get_degree");
  ERR_set_error(0x10,0xc0101,0);
  return 0;
}

