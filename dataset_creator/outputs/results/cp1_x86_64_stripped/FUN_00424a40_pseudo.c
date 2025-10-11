
long * FUN_00424a40(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return param_1;
  }
  plVar2 = (long *)FUN_004a0640();
  if (plVar2 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/objects/obj_lib.c",0x1c,"OBJ_dup");
    FUN_0051f8f0(8,0x8000d,0);
    return (long *)0x0;
  }
  iVar4 = *(int *)((long)param_1 + 0x14);
  *(uint *)(plVar2 + 4) = *(uint *)(param_1 + 4) | 0xd;
  if (0 < iVar4) {
    lVar3 = FUN_0041c320(param_1[3],(long)iVar4,"../crypto/objects/obj_lib.c",0x26);
    plVar2[3] = lVar3;
    if (lVar3 == 0) goto LAB_00424af0;
    iVar4 = *(int *)((long)param_1 + 0x14);
  }
  lVar1 = param_1[2];
  lVar3 = param_1[1];
  *(int *)((long)plVar2 + 0x14) = iVar4;
  *(int *)(plVar2 + 2) = (int)lVar1;
  if (lVar3 != 0) {
    lVar3 = FUN_0041c2c0(lVar3,"../crypto/objects/obj_lib.c",0x2c);
    plVar2[1] = lVar3;
    if (lVar3 == 0) goto LAB_00424af0;
  }
  if (*param_1 == 0) {
    return plVar2;
  }
  lVar3 = FUN_0041c2c0(*param_1,"../crypto/objects/obj_lib.c",0x2f);
  *plVar2 = lVar3;
  if (lVar3 != 0) {
    return plVar2;
  }
LAB_00424af0:
  FUN_004a06b0(plVar2);
  FUN_0051f420();
  FUN_0051f540("../crypto/objects/obj_lib.c",0x35,"OBJ_dup");
  FUN_0051f8f0(8,0xc0100,0);
  return (long *)0x0;
}

