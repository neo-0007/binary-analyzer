
int ns_name_unpack(u_char *param_1,u_char *param_2,u_char *param_3,u_char *param_4,size_t param_5)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  
  if ((param_3 < param_1) || (param_2 <= param_3)) {
LAB_007ba550:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x5a;
    iVar7 = -1;
  }
  else {
    pbVar4 = param_3 + 1;
    uVar5 = (uint)*param_3;
    if (uVar5 == 0) {
      *param_4 = '\0';
      iVar7 = 1;
    }
    else {
      iVar8 = 0;
      iVar7 = -1;
      pbVar3 = param_4;
      pbVar9 = param_3;
      do {
        if ((uVar5 & 0xc0) == 0) {
          if (((0x3f < uVar5) ||
              ((long)(param_4 + (param_5 - (long)pbVar3)) <= (long)(int)(uVar5 + 1))) ||
             (uVar2 = (ulong)uVar5, (long)param_2 - (long)pbVar4 <= (long)uVar2)) goto LAB_007ba550;
          *pbVar3 = (byte)uVar5;
          iVar8 = iVar8 + uVar5 + 1;
          pbVar9 = pbVar3 + 1;
          if (uVar5 < 8) {
            if ((uVar5 & 4) == 0) {
              if ((uVar5 != 0) && (*pbVar9 = *pbVar4, (uVar5 & 2) != 0)) {
                *(undefined2 *)(pbVar3 + (uVar2 - 1)) = *(undefined2 *)(pbVar4 + (uVar2 - 2));
              }
            }
            else {
              *(undefined4 *)pbVar9 = *(undefined4 *)pbVar4;
              *(undefined4 *)(pbVar3 + (uVar2 - 3)) = *(undefined4 *)(pbVar4 + (uVar2 - 4));
            }
          }
          else {
            *(undefined8 *)(pbVar3 + 1) = *(undefined8 *)pbVar4;
            *(undefined8 *)(pbVar3 + (uVar2 - 7)) = *(undefined8 *)(pbVar4 + (uVar2 - 8));
            lVar1 = (long)pbVar9 - ((ulong)(pbVar3 + 9) & 0xfffffffffffffff8);
            uVar5 = (int)lVar1 + uVar5 & 0xfffffff8;
            if (7 < uVar5) {
              uVar6 = 0;
              do {
                uVar10 = (ulong)uVar6;
                uVar6 = uVar6 + 8;
                *(undefined8 *)(((ulong)(pbVar3 + 9) & 0xfffffffffffffff8) + uVar10) =
                     *(undefined8 *)(pbVar4 + (uVar10 - lVar1));
              } while (uVar6 < uVar5);
            }
          }
          pbVar3 = pbVar9 + uVar2;
          pbVar9 = pbVar4 + uVar2;
        }
        else {
          if (((char)(uVar5 & 0xc0) != -0x40) || (param_2 <= pbVar4)) goto LAB_007ba550;
          if (iVar7 < 0) {
            iVar7 = ((int)pbVar4 - (int)param_3) + 1;
          }
          lVar1 = (long)(int)((uVar5 & 0x3f) << 8 | (uint)pbVar9[1]);
          if ((long)param_2 - (long)param_1 <= lVar1) goto LAB_007ba550;
          iVar8 = iVar8 + 2;
          pbVar9 = param_1 + lVar1;
          if ((long)param_2 - (long)param_1 <= (long)iVar8) goto LAB_007ba550;
        }
        uVar5 = (uint)*pbVar9;
        pbVar4 = pbVar9 + 1;
      } while (*pbVar9 != 0);
      *pbVar3 = 0;
      if (iVar7 < 0) {
        iVar7 = (int)pbVar4 - (int)param_3;
      }
    }
  }
  return iVar7;
}

