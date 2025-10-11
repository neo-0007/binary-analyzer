
ulong FUN_0061f410(int *param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  iVar2 = FUN_006208e0();
  if (iVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_oct.c",0x9f,"i2o_SCT_signature");
    FUN_0051f8f0(0x32,0x6b,0);
  }
  else {
    if (*param_1 == 0) {
      uVar1 = *(long *)(param_1 + 0x14) + 4;
      if (param_2 != (long *)0x0) {
        puVar3 = (undefined1 *)*param_2;
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = (undefined1 *)FUN_0041ad90(uVar1,"../crypto/ct/ct_oct.c",0xb4);
          puVar4 = puVar3;
          if (puVar3 == (undefined1 *)0x0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/ct/ct_oct.c",0xb6,"i2o_SCT_signature");
            FUN_0051f8f0(0x32,0xc0100,0);
            goto LAB_0061f4f0;
          }
        }
        else {
          puVar4 = puVar3 + uVar1;
        }
        *param_2 = (long)puVar4;
        *puVar3 = (char)param_1[0x10];
        puVar3[1] = *(undefined1 *)((long)param_1 + 0x41);
        puVar3[2] = (char)((ulong)*(undefined8 *)(param_1 + 0x14) >> 8);
        puVar3[3] = (char)*(undefined8 *)(param_1 + 0x14);
        thunk_FUN_00713a50(puVar3 + 4,*(undefined8 *)(param_1 + 0x12),
                           *(undefined8 *)(param_1 + 0x14));
      }
      return uVar1 & 0xffffffff;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_oct.c",0xa4,"i2o_SCT_signature");
    FUN_0051f8f0(0x32,0x67,0);
  }
LAB_0061f4f0:
  FUN_0041ad60(0,"../crypto/ct/ct_oct.c",0xc4);
  return 0xffffffff;
}

