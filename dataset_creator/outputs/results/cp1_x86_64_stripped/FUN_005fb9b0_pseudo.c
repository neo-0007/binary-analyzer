
void FUN_005fb9b0(char *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  long in_FS_OFFSET;
  bool bVar13;
  char *local_b0;
  undefined4 local_60;
  byte local_5c [4];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = 0;
  local_48 = (undefined1 *)0x0;
  uVar4 = FUN_0051e9f0();
  if (param_1 == (char *)0x0) {
    param_1 = "";
  }
  if (uVar4 == 0) {
    FUN_0051f420();
    FUN_0051f540(&DAT_0083e5c2,0,0);
    FUN_0051f8f0(1,0,0);
  }
  uVar9 = 2;
  if ((uVar4 & 0x80000000) == 0) {
    uVar9 = (uint)(uVar4 >> 0x17) & 0xff;
  }
LAB_005fbafa:
  do {
    FUN_0051ea70(&local_58,&local_60,&local_50,&local_48,local_5c);
    if ((local_5c[0] & 2) != 0) {
      uVar6 = thunk_FUN_007129d0(local_48);
      local_b0 = param_1;
      if (uVar6 < 0xf9c) {
        uVar10 = 0xf9c - uVar6;
        goto LAB_005fba89;
      }
      uVar6 = 0;
      if (*param_1 != '\0') goto LAB_005fbb4f;
LAB_005fbab4:
      pcVar11 = param_2 + uVar6;
      uVar10 = thunk_FUN_007129d0(param_2);
      pcVar12 = param_2 + uVar10;
      if (uVar6 < uVar10) goto LAB_005fbc70;
LAB_005fbacf:
      pcVar11 = pcVar12;
      FUN_0051ef40(2,local_b0,param_2);
      goto LAB_005fbaf0;
    }
    uVar10 = 0xf9c;
    uVar6 = 0;
    local_48 = &DAT_0083e5c2;
    local_b0 = "";
LAB_005fba89:
    uVar5 = thunk_FUN_007129d0(param_1);
    uVar6 = 0xf9b - (uVar6 + uVar5);
    if (uVar10 <= uVar5) {
      uVar6 = 0;
    }
    if (*param_1 == '\0') goto LAB_005fbab4;
LAB_005fbb4f:
    bVar13 = false;
    pcVar12 = param_2;
    if (*param_2 == '\0') goto LAB_005fbacf;
    do {
      pcVar11 = pcVar12;
      lVar8 = FUN_004011e0(pcVar11,param_1);
      if (lVar8 == 0) {
        lVar8 = thunk_FUN_007129d0(pcVar11);
        pcVar12 = pcVar11 + lVar8;
        uVar10 = (long)pcVar12 - (long)param_2;
LAB_005fbbbc:
        if (uVar10 <= uVar6) {
          if (!bVar13) goto LAB_005fbacf;
          lVar8 = thunk_FUN_007129d0(param_1);
          lVar8 = FUN_0041c400(param_2,pcVar12 + (-(long)param_2 - lVar8),"../crypto/err/err_prn.c",
                               0x85);
          if (lVar8 == 0) goto LAB_005fbc40;
          FUN_0051ef40(2,local_b0,lVar8);
          FUN_0041ad60(lVar8,"../crypto/err/err_prn.c",0x8a);
          param_2 = pcVar12;
          if (*pcVar12 == '\0') goto LAB_005fbc40;
          goto LAB_005fbafa;
        }
        break;
      }
      lVar7 = thunk_FUN_007129d0(param_1);
      pcVar12 = (char *)(lVar8 + lVar7);
      bVar13 = *pcVar12 == '\0';
      uVar10 = (long)pcVar12 - (long)param_2;
      if (*pcVar12 == '\0') goto LAB_005fbbbc;
    } while (uVar10 <= uVar6);
LAB_005fbc70:
    if (param_2 != pcVar11) {
      lVar8 = FUN_0041c400(param_2,(long)pcVar11 - (long)param_2,"../crypto/err/err_prn.c",0x7b);
      if (lVar8 == 0) break;
      FUN_0051ef40(2,param_1,lVar8);
      FUN_0041ad60(lVar8,"../crypto/err/err_prn.c",0x7f);
    }
    uVar3 = local_50;
    uVar2 = local_58;
    uVar1 = local_60;
    FUN_0051f420();
    FUN_0051f540(uVar2,uVar1,uVar3);
    FUN_0051f8f0(uVar9,uVar4 & 0xffffffff,0);
LAB_005fbaf0:
    param_2 = pcVar11;
  } while (*pcVar11 != '\0');
LAB_005fbc40:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

