
int FUN_00532ce0(long param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 >> 0x3e != 0) || ((param_4 & 7) != 0)) goto LAB_00533020;
  iVar2 = FUN_005358b0(param_2,param_3,param_4 & 0xffffffff);
  if (iVar2 != 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/e_des3.c",0x18e,"des_ede3_wrap_cipher");
    FUN_0051f8f0(6,0xa2,0);
    iVar2 = 0;
    goto LAB_00532dfe;
  }
  iVar3 = FUN_004098b0(param_1);
  iVar2 = (int)param_4;
  if (iVar3 != 0) {
    if (param_2 == (undefined8 *)0x0) {
LAB_00532dfb:
      iVar2 = iVar2 + 0x10;
    }
    else {
      puVar6 = param_2 + 1;
      thunk_FUN_00713610(puVar6,param_3,param_4);
      lVar4 = FUN_0057cd40(param_3,param_4,local_58);
      if (lVar4 != 0) {
        *(undefined8 *)((long)param_2 + param_4 + 8) = local_58[0];
        FUN_004227b0(local_58,0x14);
        iVar3 = FUN_00429650(param_1 + 0x28,8);
        if (0 < iVar3) {
          *param_2 = *(undefined8 *)(param_1 + 0x28);
          FUN_005322f0(param_1,puVar6,puVar6,param_4 + 8);
          FUN_004c52e0(param_2,0,param_4 + 0x10);
          *(undefined8 *)(param_1 + 0x28) = 0x521e8792ca2dd4a;
          FUN_005322f0(param_1,param_2,param_2,param_4 + 0x10);
          goto LAB_00532dfb;
        }
      }
LAB_00533020:
      iVar2 = -1;
    }
    goto LAB_00532dfe;
  }
  if (param_4 < 0x18) goto LAB_00533020;
  if (param_2 == (undefined8 *)0x0) {
LAB_00532f6b:
    iVar2 = iVar2 + -0x10;
    goto LAB_00532dfe;
  }
  lVar4 = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x28) = 0x521e8792ca2dd4a;
  FUN_005322f0(param_1,local_68,param_3,8);
  if (param_2 == param_3) {
    param_3 = param_2 + -1;
    thunk_FUN_00713610(param_2,param_2 + 1,param_4 - 8);
    puVar6 = param_2;
  }
  else {
    puVar6 = param_3 + 1;
  }
  lVar1 = param_4 - 0x10;
  FUN_005322f0(param_1,param_2,puVar6,lVar1);
  FUN_005322f0(param_1,local_60,(param_4 - 8) + (long)param_3,8);
  FUN_004c52e0(local_68,0,8);
  FUN_004c52e0(param_2,0,lVar1);
  FUN_004c52e0(lVar4,local_60,8);
  FUN_005322f0(param_1,param_2,param_2,lVar1);
  FUN_005322f0(param_1,local_68,local_68,8);
  lVar5 = FUN_0057cd40(param_2,lVar1,local_58);
  if (lVar5 == 0) {
LAB_00532fb0:
    FUN_004227b0(local_68,8);
    FUN_004227b0(local_58,0x14);
    FUN_004227b0(local_60,8);
    FUN_004227b0(lVar4,8);
  }
  else {
    iVar3 = FUN_00422820(local_58,local_68,8);
    if (iVar3 != 0) goto LAB_00532fb0;
    FUN_004227b0(local_68,8);
    FUN_004227b0(local_58,0x14);
    FUN_004227b0(local_60,8);
    FUN_004227b0(lVar4,8);
    if (iVar2 != 0xf) goto LAB_00532f6b;
  }
  FUN_004227b0(param_2,lVar1);
  iVar2 = -1;
LAB_00532dfe:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

