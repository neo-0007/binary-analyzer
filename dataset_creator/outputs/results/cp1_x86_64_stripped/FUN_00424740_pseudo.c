
undefined4 FUN_00424740(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    iVar1 = FUN_00424460(param_2);
    if (iVar1 != 0) goto LAB_004247f0;
  }
  if (param_3 != 0) {
    iVar1 = FUN_00424390(param_3);
    if (iVar1 != 0) {
LAB_004247f0:
      FUN_0051f420();
      FUN_0051f540("../crypto/objects/obj_dat.c",0x2cf,"OBJ_create");
      FUN_0051f8f0(8,0x66,0);
      return 0;
    }
  }
  uVar2 = 0;
  plVar3 = (long *)FUN_00424530(param_1,1);
  if (plVar3 != (long *)0x0) {
    iVar1 = FUN_00423da0(plVar3);
    if (iVar1 == 0) {
      uVar2 = FUN_00423750(1);
      *plVar3 = param_2;
      *(undefined4 *)(plVar3 + 2) = uVar2;
      plVar3[1] = param_3;
      uVar2 = FUN_00423770(plVar3);
      *plVar3 = 0;
      plVar3[1] = 0;
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/objects/obj_dat.c",0x2da,"OBJ_create");
      FUN_0051f8f0(8,0x66,0);
    }
    FUN_004a06b0(plVar3);
  }
  return uVar2;
}

