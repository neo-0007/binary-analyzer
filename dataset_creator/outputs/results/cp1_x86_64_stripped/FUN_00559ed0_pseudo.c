
int FUN_00559ed0(long *param_1,undefined8 param_2,int param_3,code *param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 uStack_4c0;
  undefined8 *local_488;
  int local_474;
  undefined8 *local_470;
  undefined1 local_468 [5];
  undefined8 local_463;
  undefined2 local_45b;
  undefined1 local_459;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_470 = (undefined8 *)0x0;
  iVar3 = FUN_005597d0(0,param_2,0);
  if (iVar3 < 0) {
    iVar7 = -1;
    goto LAB_0055a16c;
  }
  iVar7 = (-(uint)(param_3 == 0) & 0xfffffff0) + 0x28 + iVar3;
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    local_488 = (undefined8 *)FUN_0041ad90((long)iVar7,"../crypto/pem/pvkfmt.c",0x3fe);
    local_470 = local_488;
    if (local_488 == (undefined8 *)0x0) {
      FUN_0051f420();
      iVar7 = -1;
      FUN_0051f540("../crypto/pem/pvkfmt.c",0x400,"i2b_PVK");
      FUN_0051f8f0(9,0xc0100,0);
      goto LAB_0055a16c;
    }
  }
  else {
    local_488 = (undefined8 *)0x0;
    local_470 = (undefined8 *)*param_1;
  }
  lVar5 = FUN_00535890();
  puVar2 = local_470;
  if (lVar5 == 0) {
LAB_0055a1a0:
    lVar6 = 0;
LAB_0055a1a3:
    iVar7 = -1;
  }
  else {
    *local_470 = 0xb0b5f11e;
    iVar4 = FUN_0040e580();
    puVar1 = puVar2 + 3;
    *(undefined1 *)((long)puVar2 + 0xb) = 0;
    *(undefined1 *)((long)puVar2 + 0xf) = 0;
    *(undefined1 *)((long)puVar2 + 0x13) = 0;
    *(undefined2 *)((long)puVar2 + 9) = 0;
    *(char *)(puVar2 + 1) = (iVar4 != 6) + '\x01';
    *(bool *)((long)puVar2 + 0xc) = param_3 != 0;
    *(undefined2 *)((long)puVar2 + 0xd) = 0;
    *(char *)(puVar2 + 2) = (param_3 != 0) << 4;
    *(undefined2 *)((long)puVar2 + 0x11) = 0;
    *(int *)((long)puVar2 + 0x14) = iVar3;
    local_470 = puVar1;
    if (param_3 != 0) {
      iVar4 = FUN_00429580(param_6,puVar1,0x10,0);
      if (iVar4 < 1) goto LAB_0055a1a0;
      local_470 = puVar2 + 5;
      FUN_005597d0(&local_470,param_2,0);
      if (param_4 == (code *)0x0) {
        uStack_4c0 = 0x55a295;
        iVar4 = FUN_005551d0(local_448,0x400,1,param_5);
      }
      else {
        uStack_4c0 = 0x55a050;
        iVar4 = (*param_4)();
      }
      if (iVar4 < 1) {
        FUN_0051f420();
        lVar6 = 0;
        FUN_0051f540("../crypto/pem/pvkfmt.c",0x427,"i2b_PVK");
        FUN_0051f8f0(9,0x68,0);
      }
      else {
        iVar4 = FUN_005593f0(local_468,puVar1,0x10,local_448,iVar4,param_6);
        if ((iVar4 == 0) || (lVar6 = FUN_00537960(param_6,"RC4",param_7,uStack_4c0), lVar6 == 0))
        goto LAB_0055a1a0;
        if (param_3 == 1) {
          local_459 = 0;
          local_463 = 0;
          local_45b = 0;
        }
        puVar2 = puVar2 + 6;
        local_470 = puVar2;
        iVar4 = FUN_00538aa0(lVar5,lVar6,0,local_468,0);
        if (iVar4 != 0) {
          FUN_004227b0(local_468,0x14);
          iVar3 = FUN_00535bf0(lVar5,puVar2,&local_474,puVar2,iVar3 + -8);
          if ((iVar3 != 0) &&
             (iVar3 = FUN_00535df0(lVar5,(long)puVar2 + (long)local_474,&local_474), iVar3 != 0))
          goto LAB_0055a142;
        }
      }
      goto LAB_0055a1a3;
    }
    lVar6 = 0;
    FUN_005597d0(&local_470,param_2,0);
LAB_0055a142:
    if (*param_1 == 0) {
      *param_1 = (long)local_488;
    }
  }
  FUN_00537b70(lVar5);
  FUN_00537a40(lVar6);
  if (*param_1 == 0) {
    FUN_0041ad60(local_488,"../crypto/pem/pvkfmt.c",0x448);
  }
LAB_0055a16c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar7;
}

