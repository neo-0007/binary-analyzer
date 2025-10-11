
undefined8
EC_POINT_set_affine_coordinates
          (EC_GROUP *param_1,EC_POINT *param_2,undefined8 param_3,undefined8 param_4,BN_CTX *param_5
          )

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(*(long *)param_1 + 0x78);
  if (pcVar1 != (code *)0x0) {
    if ((*(long *)param_1 == *(long *)param_2) &&
       (((*(int *)(param_1 + 0x20) == 0 || (*(int *)(param_2 + 8) == 0)) ||
        (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 8))))) {
      uVar3 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
      if ((int)uVar3 != 0) {
        iVar2 = EC_POINT_is_on_curve(param_1,param_2,param_5);
        uVar3 = 1;
        if (iVar2 < 1) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_lib.c",0x36d,"EC_POINT_set_affine_coordinates");
          ERR_set_error(0x10,0x6b,0);
          uVar3 = 0;
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_lib.c",0x366,"EC_POINT_set_affine_coordinates");
      ERR_set_error(0x10,0x65,0);
      uVar3 = 0;
    }
    return uVar3;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_lib.c",0x362,"EC_POINT_set_affine_coordinates");
  ERR_set_error(0x10,0xc0101,0);
  return 0;
}

