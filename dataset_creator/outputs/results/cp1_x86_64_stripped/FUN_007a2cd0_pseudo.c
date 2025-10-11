
/* WARNING: Removing unreachable block (ram,0x007a2d29) */

undefined8 FUN_007a2cd0(undefined8 param_1,ulong *param_2)

{
  ulong *puVar1;
  long in_FS_OFFSET;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  ulong uStack_30;
  ulong local_28;
  ulong uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (ulong *)0x0;
  if ((param_2 != (ulong *)0x0) && (puVar1 = param_2, (*param_2 & 0x180000000) != 0)) {
    uStack_90 = param_2[1];
    local_88 = param_2[2];
    uStack_80 = param_2[3];
    local_78 = param_2[4];
    uStack_70 = param_2[5];
    local_68 = param_2[6];
    uStack_60 = param_2[7];
    local_98 = *param_2 & 0xfffffffe7fffffff;
    local_58 = param_2[8];
    uStack_50 = param_2[9];
    local_48 = param_2[10];
    uStack_40 = param_2[0xb];
    local_38 = param_2[0xc];
    uStack_30 = param_2[0xd];
    local_28 = param_2[0xe];
    uStack_20 = param_2[0xf];
    puVar1 = &local_98;
  }
  syscall();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60(param_1,puVar1);
}

