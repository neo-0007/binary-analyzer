
ulong FUN_0061f570(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  undefined1 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1 *)0x0;
  iVar3 = FUN_00620910();
  if (iVar3 == 0) {
    FUN_0051f420();
    puVar7 = (undefined1 *)0x0;
    FUN_0051f540("../crypto/ct/ct_oct.c",0xce,"i2o_SCT");
    FUN_0051f8f0(0x32,0x6a,0);
LAB_0061f740:
    FUN_0041ad60(puVar7,"../crypto/ct/ct_oct.c",0xfd);
    uVar6 = 0xffffffff;
  }
  else {
    iVar3 = *param_1;
    if (iVar3 == 0) {
      uVar6 = *(long *)(param_1 + 0x14) + *(long *)(param_1 + 0xe) + 0x2f;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 4);
    }
    if (param_2 != (undefined8 *)0x0) {
      puVar4 = (undefined1 *)*param_2;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = (undefined1 *)FUN_0041ad90(uVar6,"../crypto/ct/ct_oct.c",0xe3);
        puVar7 = puVar4;
        if (puVar4 == (undefined1 *)0x0) {
          local_38 = puVar4;
          FUN_0051f420();
          FUN_0051f540("../crypto/ct/ct_oct.c",0xe5,"i2o_SCT");
          FUN_0051f8f0(0x32,0xc0100,0);
          goto LAB_0061f740;
        }
        *param_2 = puVar4;
        iVar3 = *param_1;
      }
      else {
        *param_2 = puVar4 + uVar6;
        puVar7 = (undefined1 *)0x0;
      }
      if (iVar3 == 0) {
        *puVar4 = 0;
        puVar1 = *(undefined8 **)(param_1 + 6);
        uVar2 = puVar1[1];
        *(undefined8 *)(puVar4 + 1) = *puVar1;
        *(undefined8 *)(puVar4 + 9) = uVar2;
        uVar2 = puVar1[3];
        *(undefined8 *)(puVar4 + 0x11) = puVar1[2];
        *(undefined8 *)(puVar4 + 0x19) = uVar2;
        puVar4[0x21] = *(undefined1 *)((long)param_1 + 0x2f);
        local_38 = puVar4 + 0x2b;
        puVar4[0x22] = (char)*(undefined2 *)((long)param_1 + 0x2e);
        puVar4[0x23] = (char)((ulong)*(undefined8 *)(param_1 + 10) >> 0x28);
        puVar4[0x24] = (char)param_1[0xb];
        puVar4[0x25] = (char)((ulong)*(undefined8 *)(param_1 + 10) >> 0x18);
        puVar4[0x26] = (char)((ulong)*(undefined8 *)(param_1 + 10) >> 0x10);
        puVar4[0x27] = (char)((ulong)*(undefined8 *)(param_1 + 10) >> 8);
        puVar4[0x28] = (char)*(undefined8 *)(param_1 + 10);
        puVar4[0x29] = (char)((ulong)*(undefined8 *)(param_1 + 0xe) >> 8);
        puVar4[0x2a] = (char)*(undefined8 *)(param_1 + 0xe);
        if (*(long *)(param_1 + 0xe) != 0) {
          lVar5 = thunk_FUN_00713a50(local_38,*(undefined8 *)(param_1 + 0xc));
          local_38 = (undefined1 *)(lVar5 + *(long *)(param_1 + 0xe));
        }
        iVar3 = FUN_0061f410(param_1,&local_38);
        if (iVar3 < 1) goto LAB_0061f740;
      }
      else {
        local_38 = puVar4;
        thunk_FUN_00713a50(puVar4,*(undefined8 *)(param_1 + 2),uVar6);
      }
    }
    uVar6 = uVar6 & 0xffffffff;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

