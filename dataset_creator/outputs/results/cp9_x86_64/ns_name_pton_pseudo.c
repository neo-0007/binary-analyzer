
int ns_name_pton(char *param_1,u_char *param_2,size_t param_3)

{
  u_char *puVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  u_char *puVar6;
  u_char *puVar7;
  char *pcVar8;
  u_char *puVar9;
  long in_FS_OFFSET;
  
  iVar4 = (int)*param_1;
  puVar1 = param_2 + param_3;
  if (*param_1 == '\0') {
    if (param_2 < puVar1) {
      *param_2 = '\0';
      return iVar4;
    }
  }
  else {
    bVar2 = false;
    puVar6 = param_2 + 1;
    pcVar3 = param_1 + 1;
    puVar9 = param_2;
LAB_007bec1e:
    do {
      pcVar8 = pcVar3;
      puVar7 = puVar6;
      if (bVar2) {
        if (iVar4 - 0x30U < 10) {
          if (9 < (byte)(param_1[1] - 0x30U)) goto LAB_007becc0;
          pcVar8 = param_1 + 3;
          if ((9 < (byte)(param_1[2] - 0x30U)) ||
             (iVar4 = (iVar4 - 0x30U) * 100 + (param_1[1] * 5 + -0xf0) * 2 + -0x30 + (int)param_1[2]
             , 0xff < iVar4)) goto LAB_007becc0;
        }
LAB_007bebfc:
        if (puVar1 <= puVar7) goto LAB_007becc0;
        *puVar7 = (u_char)iVar4;
        bVar2 = false;
        puVar6 = puVar7 + 1;
      }
      else {
        if (iVar4 != 0x5c) {
          if (iVar4 != 0x2e) goto LAB_007bebfc;
          uVar5 = ((int)puVar7 - (int)puVar9) - 1;
          if (((uVar5 & 0xc0) != 0) || (puVar1 <= puVar9)) goto LAB_007becc0;
          *puVar9 = (u_char)uVar5;
          if (param_1[1] == '\0') {
            if (uVar5 != 0) {
              if (puVar1 <= puVar7) goto LAB_007becc0;
              *puVar7 = '\0';
              puVar7 = puVar7 + 1;
            }
            if ((long)puVar7 - (long)param_2 < 0x100) {
              return 1;
            }
            goto LAB_007becc0;
          }
          if ((uVar5 == 0) || (param_1[1] == '.')) goto LAB_007becc0;
          puVar6 = puVar7 + 1;
          iVar4 = (int)*pcVar8;
          bVar2 = false;
          pcVar3 = pcVar8 + 1;
          param_1 = pcVar8;
          puVar9 = puVar7;
          if (*pcVar8 == '\0') {
            bVar2 = false;
            break;
          }
          goto LAB_007bec1e;
        }
        bVar2 = true;
        puVar6 = puVar7;
      }
      iVar4 = (int)*pcVar8;
      pcVar3 = pcVar8 + 1;
      param_1 = pcVar8;
    } while (*pcVar8 != '\0');
    if (!bVar2) {
      uVar5 = ((int)puVar6 - (int)puVar9) - 1;
      if (((uVar5 & 0xc0) == 0) && (puVar9 < puVar1)) {
        *puVar9 = (u_char)uVar5;
        if (uVar5 != 0) {
          if (puVar1 <= puVar6) goto LAB_007becc0;
          *puVar6 = '\0';
          puVar6 = puVar6 + 1;
        }
        if ((long)puVar6 - (long)param_2 < 0x100) {
          return uVar5 & 0xc0;
        }
      }
    }
  }
LAB_007becc0:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x5a;
  return -1;
}

