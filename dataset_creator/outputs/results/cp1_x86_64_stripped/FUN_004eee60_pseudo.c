
long * FUN_004eee60(long param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)FUN_0041aec0(0x70,"../crypto/ec/ec_kmeth.c",0x54);
  if (plVar2 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_kmeth.c",0x57,"ossl_ec_key_new_method_int");
    FUN_0051f8f0(0x10,0xc0100,0);
    return (long *)0x0;
  }
  plVar2[0xb] = param_1;
  if (param_2 == 0) {
LAB_004eeec1:
    LOCK();
    *(undefined4 *)(plVar2 + 7) = 1;
    UNLOCK();
    lVar3 = FUN_00422240();
    plVar2[10] = lVar3;
    if (lVar3 != 0) {
      lVar3 = FUN_004eedc0();
      *plVar2 = lVar3;
      if (param_3 == 0) {
        param_3 = FUN_0051d2c0();
        plVar2[1] = param_3;
        if (param_3 != 0) goto LAB_004eef05;
LAB_004eef1a:
        *(undefined4 *)(plVar2 + 2) = 1;
        *(undefined4 *)((long)plVar2 + 0x34) = 4;
        iVar1 = FUN_004196b0(8,plVar2,plVar2 + 8);
        if (iVar1 != 0) {
          if ((*(code **)(*plVar2 + 0x10) == (code *)0x0) ||
             (iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2), iVar1 != 0)) {
            return plVar2;
          }
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_kmeth.c",0x89,"ossl_ec_key_new_method_int");
          FUN_0051f8f0(0x10,0xc0105,0);
        }
      }
      else {
        iVar1 = FUN_0051a180(param_3);
        if (iVar1 == 0) {
          FUN_0051f420();
          uVar4 = 0x6f;
        }
        else {
          plVar2[1] = param_3;
LAB_004eef05:
          lVar3 = FUN_0051d2f0(param_3);
          *plVar2 = lVar3;
          if (lVar3 != 0) goto LAB_004eef1a;
          FUN_0051f420();
          uVar4 = 0x78;
        }
        FUN_0051f540("../crypto/ec/ec_kmeth.c",uVar4,"ossl_ec_key_new_method_int");
        FUN_0051f8f0(0x10,0x80026,0);
      }
      goto LAB_004eef9c;
    }
    FUN_0051f420();
    uVar4 = 0x67;
  }
  else {
    lVar3 = FUN_0041c2c0(param_2,"../crypto/ec/ec_kmeth.c",0x5d);
    plVar2[0xc] = lVar3;
    if (lVar3 != 0) goto LAB_004eeec1;
    FUN_0051f420();
    uVar4 = 0x5f;
  }
  FUN_0051f540("../crypto/ec/ec_kmeth.c",uVar4,"ossl_ec_key_new_method_int");
  FUN_0051f8f0(0x10,0xc0100,0);
LAB_004eef9c:
  FUN_004ed620(plVar2);
  return (long *)0x0;
}

