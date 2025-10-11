
undefined4 FUN_004daaa0(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    LOCK();
    plVar1 = param_1 + 2;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) || ((int)lVar3 + -1 < 1)) {
      lVar3 = *param_1;
      if (((*(byte *)((long)param_1 + 0x14) & 4) == 0) && (*(code **)(lVar3 + 0x10) != (code *)0x0))
      {
        iVar2 = (**(code **)(lVar3 + 0x10))(param_1);
        if (iVar2 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/dso/dso_lib.c",0x45,"DSO_free");
          FUN_0051f8f0(0x25,0x6b,0);
          return 0;
        }
        lVar3 = *param_1;
      }
      if ((*(code **)(lVar3 + 0x40) != (code *)0x0) &&
         (iVar2 = (**(code **)(lVar3 + 0x40))(param_1), iVar2 == 0)) {
        FUN_0051f420();
        FUN_0051f540("../crypto/dso/dso_lib.c",0x4b,"DSO_free");
        FUN_0051f8f0(0x25,0x66,0);
        return 0;
      }
      FUN_004360b0(param_1[1]);
      FUN_0041ad60(param_1[7],"../crypto/dso/dso_lib.c",0x50);
      FUN_0041ad60(param_1[8],"../crypto/dso/dso_lib.c",0x51);
      FUN_00422300(param_1[9]);
      FUN_0041ad60(param_1,"../crypto/dso/dso_lib.c",0x53);
    }
  }
  return 1;
}

