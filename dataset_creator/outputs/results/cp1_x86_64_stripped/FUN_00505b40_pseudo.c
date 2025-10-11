
void FUN_00505b40(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined7 local_58;
  byte bStack_51;
  undefined6 local_50;
  byte bStack_4a;
  undefined6 uStack_49;
  byte bStack_43;
  undefined2 uStack_42;
  undefined5 uStack_40;
  undefined7 uStack_3b;
  uint uStack_34;
  undefined3 local_30;
  byte bStack_2d;
  undefined6 uStack_2c;
  byte bStack_26;
  undefined5 uStack_25;
  undefined2 uStack_20;
  undefined6 uStack_1e;
  undefined2 uStack_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined7)*param_2;
  lVar1 = param_2[1] << 2;
  bStack_51 = (byte)((ulong)*param_2 >> 0x38) | (byte)lVar1;
  local_50 = (undefined6)((ulong)lVar1 >> 8);
  lVar2 = param_2[2] << 4;
  bStack_4a = (byte)((ulong)lVar1 >> 0x38) | (byte)lVar2;
  uStack_49 = (undefined6)((ulong)lVar2 >> 8);
  lVar1 = param_2[3] << 6;
  bStack_43 = (byte)((ulong)lVar2 >> 0x38) | (byte)lVar1;
  uStack_42 = (undefined2)((ulong)lVar1 >> 8);
  uStack_40 = (undefined5)((ulong)lVar1 >> 0x18);
  uStack_3b = (undefined7)param_2[4];
  lVar1 = param_2[5] << 2;
  uStack_34 = (uint)(byte)((ulong)param_2[4] >> 0x38) | (uint)lVar1;
  lVar2 = param_2[6] << 4;
  bStack_2d = (byte)((ulong)lVar1 >> 0x38) | (byte)lVar2;
  local_30 = (undefined3)((ulong)lVar1 >> 0x20);
  uStack_2c = (undefined6)((ulong)lVar2 >> 8);
  lVar1 = param_2[7] << 6;
  bStack_26 = (byte)((ulong)lVar2 >> 0x38) | (byte)lVar1;
  uStack_25 = (undefined5)((ulong)lVar1 >> 8);
  uStack_20 = (undefined2)((ulong)lVar1 >> 0x30);
  uStack_1e = (undefined6)param_2[8];
  uStack_18 = (undefined2)((ulong)param_2[8] >> 0x30);
  FUN_004b8810(&local_58,0x42,param_1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

