
bool ssl3_cbc_copy_mac(ulong *param_1,ulong param_2,long param_3,long *param_4,undefined4 *param_5,
                      long param_6,ulong param_7,long param_8,undefined8 param_9)

{
  byte *pbVar1;
  ulong uVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  bool bVar14;
  byte local_108 [64];
  undefined1 local_c8 [136];
  long local_40;
  
  uVar9 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = 0x40;
  if (param_2 < 0x41) {
    uVar13 = param_2;
  }
  if (uVar13 < param_7) goto LAB_00487540;
  if (param_7 == 0) {
    bVar14 = param_8 != 0;
    goto LAB_0048732f;
  }
  uVar13 = uVar9 - param_7;
  *param_1 = uVar13;
  if (param_6 == 1) {
    if (param_4 != (long *)0x0) {
      *param_4 = uVar13 + param_3;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
LAB_0048752c:
    bVar14 = true;
  }
  else {
    iVar3 = RAND_bytes_ex(param_9,local_108,param_7);
    if (((0 < iVar3) && (param_4 != (long *)0x0)) && (param_5 != (undefined4 *)0x0)) {
      pvVar4 = CRYPTO_malloc((int)param_7,"../ssl/record/tls_pad.c",0x103);
      *param_4 = (long)pvVar4;
      if (pvVar4 != (void *)0x0) {
        *param_5 = 1;
        uVar10 = (param_2 - 0x100) - param_7;
        if (param_2 <= param_7 + 0x100) {
          uVar10 = 0;
        }
        pvVar5 = memset(local_c8 + (-(int)local_c8 & 0x3f),0,param_7);
        if (uVar10 < param_2) {
          uVar10 = uVar10 - uVar9;
          uVar6 = 0;
          uVar8 = 0;
          uVar7 = 0;
          do {
            uVar2 = uVar9 + uVar10;
            uVar12 = uVar9 ^ uVar10;
            uVar11 = (long)(~(uVar13 ^ uVar2) & (uVar13 ^ uVar2) - 1) >> 0x3f;
            uVar6 = uVar6 | uVar11 & uVar8;
            pbVar1 = (byte *)(param_3 + uVar9 + uVar10);
            uVar10 = uVar10 + 1;
            uVar7 = (uVar7 | uVar11) & (long)((uVar9 ^ uVar2 | uVar12) ^ uVar2) >> 0x3f;
            uVar2 = uVar8 + 1;
            *(byte *)((long)pvVar5 + uVar8) =
                 *(byte *)((long)pvVar5 + uVar8) | *pbVar1 & (byte)uVar7;
            uVar8 = (long)((uVar2 - param_7 ^ param_7 | param_7 ^ uVar2) ^ uVar2) >> 0x3f & uVar2;
          } while (param_2 - uVar9 != uVar10);
        }
        else {
          uVar6 = 0;
        }
        uVar9 = 0;
        do {
          uVar10 = uVar9 + 1;
          uVar13 = uVar6 + 1;
          *(byte *)((long)pvVar4 + uVar9) =
               *(byte *)((long)pvVar5 + uVar6) & (byte)param_8 | local_108[uVar9] & ~(byte)param_8;
          uVar6 = (long)((uVar13 - param_7 ^ param_7 | param_7 ^ uVar13) ^ uVar13) >> 0x3f & uVar13;
          uVar9 = uVar10;
        } while (param_7 != uVar10);
        goto LAB_0048752c;
      }
    }
LAB_00487540:
    bVar14 = false;
  }
LAB_0048732f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar14;
}

