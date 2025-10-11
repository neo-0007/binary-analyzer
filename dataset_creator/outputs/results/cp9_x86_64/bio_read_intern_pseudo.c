
undefined8 bio_read_intern(long param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_lib.c",0x111,"bio_read_intern");
    ERR_set_error(0x20,0xc0102,0);
    uVar2 = 0xffffffff;
  }
  else if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x20) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_lib.c",0x115,"bio_read_intern");
    ERR_set_error(0x20,0x79,0);
    uVar2 = 0xfffffffe;
  }
  else {
    if ((*(long *)(param_1 + 0x10) != 0) ||
       (uVar2 = param_2, lVar3 = param_1, *(long *)(param_1 + 0x18) != 0)) {
      lVar3 = 0;
      uVar2 = 1;
      uVar1 = bio_call_callback(param_1,2,param_2,param_3,0,0);
      if ((int)uVar1 < 1) {
        return uVar1;
      }
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      ERR_new(lVar3,uVar2);
      ERR_set_debug("../crypto/bio/bio_lib.c",0x11f,"bio_read_intern");
      ERR_set_error(0x20,0x78,0);
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x20))(param_1,param_2,param_3,param_4);
      if (0 < (int)uVar2) {
        *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + *param_4;
      }
      if ((*(long *)(param_1 + 0x10) != 0) || (*(long *)(param_1 + 0x18) != 0)) {
        uVar2 = bio_call_callback(param_1,0x82,param_2,param_3,0,0,(long)(int)uVar2,param_4);
      }
      if ((0 < (int)uVar2) && (param_3 < *param_4)) {
        ERR_new();
        ERR_set_debug("../crypto/bio/bio_lib.c",0x12e,"bio_read_intern");
        ERR_set_error(0x20,0xc0103,0);
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}

