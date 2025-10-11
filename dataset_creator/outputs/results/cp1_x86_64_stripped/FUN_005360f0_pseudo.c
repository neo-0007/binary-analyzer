
ulong FUN_005360f0(long *param_1,long *param_2,int *param_3,long *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (int *)0x0) {
    FUN_0051f420();
    uVar4 = 0;
    FUN_0051f540("../crypto/evp/evp_enc.c",0x317,"EVP_DecryptUpdate");
    FUN_0051f8f0(6,0xc0102,0);
  }
  else {
    *param_3 = 0;
    if ((int)param_1[2] == 0) {
      lVar6 = *param_1;
      uVar4 = 0;
      if (lVar6 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/evp_enc.c",0x322,"EVP_DecryptUpdate");
        FUN_0051f8f0(6,0x83,0);
      }
      else {
        lVar8 = (long)(int)param_5;
        if (*(long *)(lVar6 + 0x78) == 0) {
          uVar2 = *(uint *)(lVar6 + 4);
          FUN_0040b2f0(param_1,0x2000);
          lVar6 = *param_1;
          if ((*(byte *)(lVar6 + 0x12) & 0x10) == 0) {
            if ((int)param_5 < 1) {
              *param_3 = 0;
              uVar4 = (uint)(param_5 == 0);
            }
            else {
              if ((*(byte *)((long)param_1 + 0x71) & 1) != 0) {
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                  uVar5 = FUN_005358f0(param_1,param_2,param_3,param_4);
                  return uVar5;
                }
                goto LAB_00536680;
              }
              if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_00418e30("assertion failed: b <= sizeof(ctx->final)","../crypto/evp/evp_enc.c",
                             0x35b);
              }
              uVar3 = *(uint *)(param_1 + 0x10);
              if (uVar3 != 0) {
                if ((param_2 == param_4) ||
                   (iVar1 = FUN_005358b0(param_2,param_4,uVar2), iVar1 != 0)) {
                  FUN_0051f420();
                  uVar9 = 0x361;
                  goto LAB_005364d1;
                }
                if (0x7fffffff - uVar2 < (-uVar2 & param_5)) {
                  FUN_0051f420();
                  uVar4 = 0;
                  FUN_0051f540("../crypto/evp/evp_enc.c",0x36e,"EVP_DecryptUpdate");
                  FUN_0051f8f0(6,0xca,0);
                  goto LAB_005361b0;
                }
                uVar5 = (ulong)uVar2;
                if (uVar2 < 8) {
                  if ((uVar2 & 4) == 0) {
                    if ((uVar2 != 0) && (*(char *)param_2 = (char)param_1[0x11], (uVar2 & 2) != 0))
                    {
                      *(undefined2 *)((long)param_2 + (uVar5 - 2)) =
                           *(undefined2 *)((long)param_1 + uVar5 + 0x86);
                    }
                  }
                  else {
                    *(int *)param_2 = (int)param_1[0x11];
                    *(undefined4 *)((long)param_2 + (uVar5 - 4)) =
                         *(undefined4 *)((long)param_1 + uVar5 + 0x84);
                  }
                }
                else {
                  *param_2 = param_1[0x11];
                  *(undefined8 *)((long)param_2 + (uVar5 - 8)) =
                       *(undefined8 *)((long)param_1 + uVar5 + 0x80);
                  lVar6 = (long)param_2 - ((ulong)(param_2 + 1) & 0xfffffffffffffff8);
                  uVar3 = (int)lVar6 + uVar2 & 0xfffffff8;
                  if (7 < uVar3) {
                    uVar7 = 0;
                    do {
                      uVar10 = (ulong)uVar7;
                      uVar7 = uVar7 + 8;
                      *(undefined8 *)(((ulong)(param_2 + 1) & 0xfffffffffffffff8) + uVar10) =
                           *(undefined8 *)((long)param_1 + uVar10 + (0x88 - lVar6));
                    } while (uVar7 < uVar3);
                  }
                }
                param_2 = (long *)((long)param_2 + uVar5);
                uVar3 = 1;
              }
              iVar1 = FUN_005358f0(param_1,param_2,param_3,param_4);
              if (iVar1 != 0) {
                if ((uVar2 < 2) || (*(int *)((long)param_1 + 0x14) != 0)) {
                  *(undefined4 *)(param_1 + 0x10) = 0;
                }
                else {
                  *param_3 = *param_3 - uVar2;
                  *(undefined4 *)(param_1 + 0x10) = 1;
                  param_2 = (long *)((long)param_2 + (long)*param_3);
                  if (uVar2 < 8) {
                    if ((uVar2 & 4) == 0) {
                      if ((uVar2 != 0) &&
                         (*(char *)(param_1 + 0x11) = (char)*param_2, (uVar2 & 2) != 0)) {
                        *(undefined2 *)((long)param_1 + (ulong)uVar2 + 0x86) =
                             *(undefined2 *)((long)param_2 + ((ulong)uVar2 - 2));
                      }
                    }
                    else {
                      *(int *)(param_1 + 0x11) = (int)*param_2;
                      *(undefined4 *)((long)param_1 + (ulong)uVar2 + 0x84) =
                           *(undefined4 *)((long)param_2 + ((ulong)uVar2 - 4));
                    }
                  }
                  else {
                    param_1[0x11] = *param_2;
                    *(undefined8 *)((long)param_1 + (ulong)uVar2 + 0x80) =
                         *(undefined8 *)((long)param_2 + ((ulong)uVar2 - 8));
                    lVar6 = (long)param_1 + (0x88 - ((ulong)(param_1 + 0x12) & 0xfffffffffffffff8));
                    uVar4 = (int)lVar6 + uVar2 & 0xfffffff8;
                    if (7 < uVar4) {
                      uVar5 = 0;
                      do {
                        uVar7 = (int)uVar5 + 8;
                        *(undefined8 *)(((ulong)(param_1 + 0x12) & 0xfffffffffffffff8) + uVar5) =
                             *(undefined8 *)((long)param_2 + (uVar5 - lVar6));
                        uVar5 = (ulong)uVar7;
                      } while (uVar7 < uVar4);
                    }
                  }
                }
                uVar4 = 1;
                if (uVar3 != 0) {
                  *param_3 = *param_3 + uVar2;
                  uVar4 = uVar3;
                }
              }
            }
          }
          else {
            if (uVar2 == 1) {
              iVar1 = FUN_005358b0(param_2,param_4);
              if (iVar1 != 0) {
                FUN_0051f420();
                uVar9 = 0x346;
LAB_005364d1:
                FUN_0051f540("../crypto/evp/evp_enc.c",uVar9,"EVP_DecryptUpdate");
                FUN_0051f8f0(6,0xa2,0);
                goto LAB_005361b0;
              }
              lVar6 = *param_1;
            }
            iVar1 = (**(code **)(lVar6 + 0x28))(param_1,param_2,param_4,lVar8);
            if (iVar1 < 0) {
              *param_3 = 0;
            }
            else {
              *param_3 = iVar1;
              uVar4 = 1;
            }
          }
        }
        else {
          iVar1 = FUN_004096f0();
          if ((*(code **)(*param_1 + 0xa8) == (code *)0x0) || (iVar1 < 1)) {
            FUN_0051f420();
            uVar9 = 0x32b;
LAB_005361f1:
            FUN_0051f540("../crypto/evp/evp_enc.c",uVar9,"EVP_DecryptUpdate");
            FUN_0051f8f0(6,0xbd,0);
          }
          else {
            lVar6 = iVar1 + lVar8;
            if (iVar1 == 1) {
              lVar6 = lVar8;
            }
            uVar2 = (**(code **)(*param_1 + 0xa8))
                              (param_1[0x15],param_2,&local_48,lVar6,param_4,lVar8);
            if (uVar2 != 0) {
              if (0x7fffffff < local_48) {
                FUN_0051f420();
                uVar9 = 0x334;
                goto LAB_005361f1;
              }
              *param_3 = (int)local_48;
              uVar4 = uVar2;
            }
          }
        }
      }
    }
    else {
      FUN_0051f420();
      uVar4 = 0;
      FUN_0051f540("../crypto/evp/evp_enc.c",0x31d,"EVP_DecryptUpdate");
      FUN_0051f8f0(6,0x94,0);
    }
  }
LAB_005361b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar4;
  }
LAB_00536680:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

