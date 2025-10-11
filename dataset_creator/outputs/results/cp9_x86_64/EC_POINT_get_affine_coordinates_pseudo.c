
undefined8
EC_POINT_get_affine_coordinates
          (EC_GROUP *param_1,EC_POINT *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(*(long *)param_1 + 0x80) == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x38a,"EC_POINT_get_affine_coordinates");
    ERR_set_error(0x10,0xc0101,0);
    return 0;
  }
  if ((*(long *)param_1 == *(long *)param_2) &&
     (((*(int *)(param_1 + 0x20) == 0 || (*(int *)(param_2 + 8) == 0)) ||
      (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 8))))) {
    iVar1 = EC_POINT_is_at_infinity(param_1,param_2);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004e45f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)param_1 + 0x80))(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x392,"EC_POINT_get_affine_coordinates");
    ERR_set_error(0x10,0x6a,0);
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x38e,"EC_POINT_get_affine_coordinates");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}

