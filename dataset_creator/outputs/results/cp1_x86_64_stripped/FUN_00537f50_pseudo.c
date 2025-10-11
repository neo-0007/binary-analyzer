
undefined8
FUN_00537f50(long *param_1,int *param_2,long param_3,long param_4,long *param_5,int param_6,
            long param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  byte bVar15;
  long local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90 [10];
  long local_40;
  
  bVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == -1) {
    uVar14 = *(uint *)(param_1 + 2);
    if (param_2 != (int *)0x0) goto LAB_00537fb0;
LAB_0053834d:
    piVar5 = (int *)*param_1;
    if (piVar5 == (int *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/evp_enc.c",0x68,"evp_cipher_init_internal");
      FUN_0051f8f0(6,0x83,0);
      uVar3 = 0;
    }
    else {
      if (param_1[1] == 0) {
        local_c8 = 0;
        if (param_3 == 0) {
          piVar8 = piVar5;
          if (piVar5[6] == 2) {
            if (piVar5 == (int *)param_1[0x16]) goto LAB_005383d0;
            FUN_00537a40((int *)param_1[0x16]);
            param_1[0x16] = 0;
            goto LAB_00538199;
          }
LAB_0053821c:
          if (*(long *)(piVar8 + 0x1e) != 0) {
LAB_00538227:
            iVar1 = FUN_005379a0(piVar8);
            if (iVar1 == 0) {
              FUN_0051f420();
              uVar3 = 0xbe;
              goto LAB_00538664;
            }
            FUN_00537a40(param_1[0x16]);
            param_1[0x16] = (long)piVar8;
LAB_0053824a:
            *param_1 = (long)piVar8;
            if (param_1[0x15] == 0) {
              UNRECOVERED_JUMPTABLE = *(code **)(piVar8 + 0x24);
              uVar3 = FUN_00420b60(*(undefined8 *)(piVar8 + 0x1e));
              lVar11 = (*UNRECOVERED_JUMPTABLE)(uVar3);
              param_1[0x15] = lVar11;
              if (lVar11 != 0) goto LAB_0053825b;
              FUN_0051f420();
              uVar3 = 200;
              goto LAB_005386a1;
            }
LAB_0053825b:
            if (((*(byte *)((long)param_1 + 0x71) & 1) != 0) &&
               (iVar1 = FUN_00536b10(param_1,0), iVar1 == 0)) goto LAB_005381a5;
            if (param_7 != 0) {
              puVar6 = &local_b8;
              for (lVar11 = 0xf; lVar11 != 0; lVar11 = lVar11 + -1) {
                *puVar6 = 0;
                puVar6 = puVar6 + (ulong)bVar15 * -2 + 1;
              }
              puVar6 = (undefined8 *)thunk_FUN_0041cdd0(param_7,"keylen");
              if (puVar6 == (undefined8 *)0x0) {
                puVar7 = (undefined8 *)thunk_FUN_0041cdd0(param_7,"ivlen");
                puVar6 = &local_b8;
                if (puVar7 != (undefined8 *)0x0) goto LAB_005382d3;
              }
              else {
                local_b8 = *puVar6;
                uStack_b0 = puVar6[1];
                local_a8 = puVar6[2];
                uStack_a0 = puVar6[3];
                local_98 = puVar6[4];
                puVar7 = (undefined8 *)thunk_FUN_0041cdd0(param_7,"ivlen");
                puVar6 = local_90;
                if (puVar7 != (undefined8 *)0x0) {
LAB_005382d3:
                  uVar3 = puVar7[1];
                  *puVar6 = *puVar7;
                  puVar6[1] = uVar3;
                  uVar3 = puVar7[3];
                  puVar6[2] = puVar7[2];
                  puVar6[3] = uVar3;
                  puVar6[4] = puVar7[4];
                }
                iVar1 = FUN_005374c0(param_1,&local_b8);
                if (iVar1 == 0) {
                  FUN_0051f420();
                  FUN_0051f540("../crypto/evp/evp_enc.c",0xf3,"evp_cipher_init_internal");
                  FUN_0051f8f0(6,0xdd,0);
                  uVar3 = 0;
                  goto LAB_0053812b;
                }
              }
            }
            if (uVar14 == 0) {
              UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xa0);
              if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_0053852c;
              FUN_0051f420();
              uVar3 = 0x10b;
            }
            else {
              UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x98);
              if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_0053852c:
                lVar11 = 0;
                if (param_5 != (long *)0x0) {
                  iVar1 = FUN_00409920(param_1);
                  lVar11 = (long)iVar1;
                }
                lVar10 = 0;
                if (param_4 != 0) {
                  iVar1 = FUN_0040a180(param_1);
                  lVar10 = (long)iVar1;
                }
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0053858f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar3 = (*UNRECOVERED_JUMPTABLE)
                                    (param_1[0x15],param_4,lVar10,param_5,lVar11,param_7);
                  return uVar3;
                }
                goto LAB_00538999;
              }
              FUN_0051f420();
              uVar3 = 0xfc;
            }
            goto LAB_005386a1;
          }
          pcVar13 = "NULL";
          if (*piVar8 != 0) {
            pcVar13 = (char *)FUN_00423b00(*piVar8,"NULL");
          }
          piVar8 = (int *)FUN_00537960(0,pcVar13,&DAT_0083e5c2);
          if (piVar8 != (int *)0x0) {
            FUN_00537a40(param_1[0x16]);
            lVar11 = *(long *)(piVar8 + 0x1e);
            param_1[0x16] = (long)piVar8;
            if (lVar11 != 0) goto LAB_00538227;
            goto LAB_0053824a;
          }
        }
        else {
LAB_00538168:
          if ((int *)param_1[0x16] == piVar5) {
LAB_005383d0:
            *param_1 = 0;
          }
          FUN_00537a40();
          param_1[0x16] = 0;
          if (param_2 != (int *)0x0) goto LAB_00538006;
LAB_00538199:
          piVar5 = (int *)*param_1;
          if (piVar5 != (int *)0x0) goto LAB_00538095;
        }
        goto LAB_005381a5;
      }
LAB_00538095:
      if (((piVar5[1] - 8U & 0xfffffff7) != 0) && (piVar5[1] != 1)) {
                    /* WARNING: Subroutine does not return */
        FUN_00418e30("assertion failed: ctx->cipher->block_size == 1 || ctx->cipher->block_size == 8 || ctx->cipher->block_size == 16"
                     ,"../crypto/evp/evp_enc.c",0x167);
      }
      if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
        uVar3 = FUN_00409860(param_1);
        iVar1 = FUN_0040a4b0(uVar3);
        if (iVar1 == 0x10002) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/evp_enc.c",0x16d,"evp_cipher_init_internal");
          FUN_0051f8f0(6,0xaa,0);
          uVar3 = 0;
          goto LAB_0053812b;
        }
      }
      uVar3 = FUN_00409860(param_1);
      uVar4 = FUN_004098c0(uVar3);
      if ((uVar4 & 0x10) == 0) {
        uVar3 = FUN_00409860(param_1);
        iVar1 = FUN_0040a4b0(uVar3);
        if (iVar1 < 5) {
          if (iVar1 < 3) {
            if (iVar1 != 2) {
              if (-1 < iVar1) goto LAB_005380e2;
              goto LAB_005381a5;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0xb) = 0;
          }
          uVar2 = FUN_00409920(param_1);
          if (uVar2 < 0x11) {
            if (param_5 != (long *)0x0) {
              if (uVar2 < 8) {
                if ((uVar2 & 4) == 0) {
                  if ((uVar2 != 0) && (*(char *)(param_1 + 3) = (char)*param_5, (uVar2 & 2) != 0)) {
                    *(undefined2 *)((long)param_1 + (ulong)uVar2 + 0x16) =
                         *(undefined2 *)((long)param_5 + ((ulong)uVar2 - 2));
                  }
                }
                else {
                  *(int *)(param_1 + 3) = (int)*param_5;
                  *(undefined4 *)((long)param_1 + (ulong)uVar2 + 0x14) =
                       *(undefined4 *)((long)param_5 + ((ulong)uVar2 - 4));
                }
              }
              else {
                param_1[3] = *param_5;
                *(undefined8 *)((long)param_1 + (ulong)uVar2 + 0x10) =
                     *(undefined8 *)((long)param_5 + ((ulong)uVar2 - 8));
                lVar11 = (long)param_1 + (0x18 - ((ulong)(param_1 + 4) & 0xfffffffffffffff8));
                uVar9 = (int)lVar11 + uVar2 & 0xfffffff8;
                if (7 < uVar9) {
                  uVar12 = 0;
                  do {
                    uVar4 = (ulong)uVar12;
                    uVar12 = uVar12 + 8;
                    *(undefined8 *)(((ulong)(param_1 + 4) & 0xfffffffffffffff8) + uVar4) =
                         *(undefined8 *)((long)param_5 + (uVar4 - lVar11));
                  } while (uVar12 < uVar9);
                }
              }
            }
            if (uVar2 < 8) {
              if ((uVar2 & 4) == 0) {
                if ((uVar2 != 0) && (*(char *)(param_1 + 5) = (char)param_1[3], (uVar2 & 2) != 0)) {
                  *(undefined2 *)((long)param_1 + (ulong)uVar2 + 0x26) =
                       *(undefined2 *)((long)param_1 + (ulong)uVar2 + 0x16);
                }
              }
              else {
                *(int *)(param_1 + 5) = (int)param_1[3];
                *(undefined4 *)((long)param_1 + (ulong)uVar2 + 0x24) =
                     *(undefined4 *)((long)param_1 + (ulong)uVar2 + 0x14);
              }
            }
            else {
              param_1[5] = param_1[3];
              *(undefined8 *)((long)param_1 + (ulong)uVar2 + 0x20) =
                   *(undefined8 *)((long)param_1 + (ulong)uVar2 + 0x10);
              lVar11 = (long)param_1 + (0x28 - ((ulong)(param_1 + 6) & 0xfffffffffffffff8));
              uVar2 = uVar2 + (int)lVar11 & 0xfffffff8;
              if (7 < uVar2) {
                uVar4 = 0;
                do {
                  uVar9 = (int)uVar4 + 8;
                  *(undefined8 *)(((ulong)(param_1 + 6) & 0xfffffffffffffff8) + uVar4) =
                       *(undefined8 *)((long)param_1 + uVar4 + (0x18 - lVar11));
                  uVar4 = (ulong)uVar9;
                } while (uVar9 < uVar2);
              }
            }
            goto LAB_005380e2;
          }
        }
        else if (iVar1 == 5) {
          *(undefined4 *)(param_1 + 0xb) = 0;
          if (param_5 != (long *)0x0) {
            iVar1 = FUN_00409920(param_1);
            if (iVar1 < 1) goto LAB_005381a5;
            thunk_FUN_00713a50(param_1 + 5,param_5,(long)iVar1);
          }
          goto LAB_005380e2;
        }
LAB_005381a5:
        uVar3 = 0;
      }
      else {
LAB_005380e2:
        lVar11 = *param_1;
        if ((param_4 != 0) || ((*(byte *)(lVar11 + 0x10) & 0x20) != 0)) {
          iVar1 = (**(code **)(lVar11 + 0x20))(param_1,param_4,param_5,uVar14);
          if (iVar1 == 0) goto LAB_005381a5;
          lVar11 = *param_1;
        }
        iVar1 = *(int *)(lVar11 + 4);
        *(undefined4 *)((long)param_1 + 0x14) = 0;
        uVar3 = 1;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(int *)((long)param_1 + 0x84) = iVar1 + -1;
      }
    }
  }
  else {
    uVar14 = (uint)(param_6 != 0);
    *(uint *)(param_1 + 2) = (uint)(param_6 != 0);
    if (param_2 == (int *)0x0) goto LAB_0053834d;
LAB_00537fb0:
    if (param_1[1] == 0) {
      if (param_3 != 0) {
        piVar5 = (int *)*param_1;
        local_c8 = 0;
        goto LAB_00538168;
      }
LAB_005381b0:
      local_c8 = FUN_0051cbd0(*param_2);
      piVar5 = (int *)*param_1;
      if (param_1[1] != 0) goto LAB_00537fdb;
      if (local_c8 != 0) goto LAB_00538168;
      if (param_2[6] != 2) {
        piVar8 = param_2;
        if (piVar5 != (int *)0x0) {
          FUN_0041aef0(param_1[0xf],(long)piVar5[0xe],"../crypto/evp/evp_enc.c",0x95);
          param_1[0xf] = 0;
          if (*param_1 != 0) {
            lVar11 = param_1[0xe];
            FUN_00537a80(param_1);
            *(uint *)(param_1 + 2) = uVar14;
            param_1[0xe] = lVar11;
          }
        }
        goto LAB_0053821c;
      }
      if ((int *)param_1[0x16] == piVar5) goto LAB_005383d0;
      FUN_00537a40((int *)param_1[0x16]);
      param_1[0x16] = 0;
      if (*param_1 != 0) goto LAB_0053800c;
LAB_00538391:
      iVar1 = param_2[0xe];
      *param_1 = (long)param_2;
      param_1[1] = 0;
      if (iVar1 == 0) {
LAB_00538075:
        param_1[0xf] = 0;
        piVar5 = param_2;
      }
      else {
LAB_005383a7:
        lVar11 = FUN_0041aec0((long)iVar1,"../crypto/evp/evp_enc.c",0x14c);
        param_1[0xf] = lVar11;
        if (lVar11 == 0) {
          *param_1 = 0;
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/evp_enc.c",0x14f,"evp_cipher_init_internal");
          FUN_0051f8f0(6,0xc0100,0);
          uVar3 = 0;
          goto LAB_0053812b;
        }
        piVar5 = (int *)*param_1;
      }
      iVar1 = param_2[2];
      param_1[0xe] = param_1[0xe] & 1;
      *(int *)(param_1 + 0xd) = iVar1;
      if ((*(byte *)(piVar5 + 4) & 0x40) == 0) goto LAB_00538095;
      iVar1 = FUN_00536c00(param_1,0,0,0);
      if (iVar1 != 0) goto LAB_00538199;
      *param_1 = 0;
      FUN_0051f420();
      uVar3 = 0x15b;
    }
    else {
      piVar5 = (int *)*param_1;
      if ((piVar5 != (int *)0x0) && (*param_2 == *piVar5)) goto LAB_00538095;
      local_c8 = 0;
      if (param_3 == 0) goto LAB_005381b0;
LAB_00537fdb:
      if ((int *)param_1[0x16] == piVar5) goto LAB_005383d0;
      FUN_00537a40((int *)param_1[0x16]);
      param_1[0x16] = 0;
LAB_00538006:
      if (*param_1 != 0) {
LAB_0053800c:
        lVar11 = param_1[0xe];
        FUN_00537a80(param_1);
        *(uint *)(param_1 + 2) = uVar14;
        param_1[0xe] = lVar11;
      }
      if (param_3 == 0) {
        param_3 = local_c8;
        if (local_c8 == 0) goto LAB_00538391;
LAB_0053804b:
        param_2 = (int *)FUN_0051cc00(param_3,*param_2);
        if (param_2 == (int *)0x0) {
          FUN_0051f420();
          uVar3 = 0x13b;
LAB_005386a1:
          FUN_0051f540("../crypto/evp/evp_enc.c",uVar3,"evp_cipher_init_internal");
          FUN_0051f8f0(6,0x86,0);
          goto LAB_005381a5;
        }
        iVar1 = param_2[0xe];
        param_1[1] = param_3;
        *param_1 = (long)param_2;
        if (iVar1 != 0) goto LAB_005383a7;
        goto LAB_00538075;
      }
      iVar1 = FUN_0051a180(param_3);
      if (iVar1 != 0) goto LAB_0053804b;
      FUN_0051f420();
      uVar3 = 299;
    }
LAB_00538664:
    FUN_0051f540("../crypto/evp/evp_enc.c",uVar3,"evp_cipher_init_internal");
    FUN_0051f8f0(6,0x86,0);
    uVar3 = 0;
  }
LAB_0053812b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00538999:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

