
undefined8 * FUN_00622390(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_0041aec0(0x18,"../crypto/ct/ct_log.c",0x69);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_log.c",0x6c,"CTLOG_STORE_new_ex");
    FUN_0051f8f0(0x32,0xc0100,0);
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  if (param_2 != 0) {
    lVar2 = FUN_0041c2c0(param_2,"../crypto/ct/ct_log.c",0x72);
    puVar1[1] = lVar2;
    if (lVar2 == 0) {
      FUN_0051f420();
      uVar3 = 0x74;
      goto LAB_00622451;
    }
  }
  lVar2 = FUN_00436410();
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    return puVar1;
  }
  FUN_0051f420();
  uVar3 = 0x7b;
LAB_00622451:
  FUN_0051f540("../crypto/ct/ct_log.c",uVar3,"CTLOG_STORE_new_ex");
  FUN_0051f8f0(0x32,0xc0100,0);
  FUN_00622330(puVar1);
  return (undefined8 *)0x0;
}

