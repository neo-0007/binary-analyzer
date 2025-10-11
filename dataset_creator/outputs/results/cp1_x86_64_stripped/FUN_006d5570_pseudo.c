
ulong FUN_006d5570(long param_1,undefined8 *param_2,ulong *param_3,undefined1 *param_4,
                  undefined8 *param_5,long *param_6,uint param_7,int param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  uint uVar14;
  undefined1 *puVar15;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  long local_88;
  uint local_4c;
  undefined1 *local_48;
  long local_40;
  
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  local_4c = param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = param_2 + 6;
  if (((*(byte *)(param_2 + 2) & 1) == 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x90), *(long *)(param_1 + 0x68) != 0)) {
    UNRECOVERED_JUMPTABLE =
         (code *)(((ulong)UNRECOVERED_JUMPTABLE >> 0x11 | (long)UNRECOVERED_JUMPTABLE << 0x2f) ^
                 *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if (param_7 == 0) {
    puVar5 = param_5;
    if (param_5 == (undefined8 *)0x0) {
      puVar5 = param_2;
    }
    puVar11 = (undefined1 *)*puVar5;
    puVar2 = (undefined1 *)param_2[1];
    if (param_8 != 0) {
      puVar3 = (uint *)param_2[4];
      uVar4 = *puVar3;
      if ((uVar4 & 7) != 0) {
        if (param_5 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("outbufstart == NULL","../iconv/skeleton.c",0x233,
                       "__gconv_transform_internal_ucs4");
        }
        puVar12 = (undefined1 *)*param_3;
        uVar9 = (ulong)(int)(uVar4 & 7);
        uVar10 = uVar9;
        if (puVar12 < param_4) {
          if ((uVar4 & 4) == 0) {
            uVar10 = uVar9 + 1;
            *param_3 = (ulong)(puVar12 + 1);
            *(undefined1 *)((long)puVar3 + uVar9 + 4) = *puVar12;
            if (param_4 <= puVar12 + 1) goto LAB_006d594b;
            if (uVar10 != 4) {
              uVar10 = uVar9 + 2;
              *param_3 = (ulong)(puVar12 + 2);
              *(undefined1 *)((long)puVar3 + uVar9 + 5) = puVar12[1];
              if (param_4 <= puVar12 + 2) goto LAB_006d594b;
              if (uVar10 == 3) {
                *param_3 = (ulong)(puVar12 + 3);
                *(undefined1 *)((long)puVar3 + 7) = puVar12[2];
              }
            }
          }
        }
        else {
LAB_006d594b:
          if (uVar10 < 4) {
            uVar14 = 7;
            *puVar3 = (uint)uVar10 | uVar4 & 0xfffffff8;
            goto LAB_006d5778;
          }
        }
        *puVar11 = *(undefined1 *)((long)puVar3 + 7);
        puVar11[1] = *(undefined1 *)((long)puVar3 + 6);
        puVar11[2] = *(undefined1 *)((long)puVar3 + 5);
        puVar11[3] = (char)puVar3[1];
        *puVar3 = *puVar3 & 0xfffffff8;
        puVar11 = puVar11 + 4;
      }
    }
    while( true ) {
      local_88 = 0;
      puVar12 = (undefined1 *)*param_3;
      if (param_6 != (long *)0x0) {
        local_88 = *param_6;
      }
      lVar13 = (long)param_4 - (long)puVar12;
      lVar6 = (long)puVar2 - (long)puVar11;
      if (lVar13 < lVar6) {
        lVar6 = lVar13;
      }
      lVar8 = lVar6 + 3;
      if (-1 < lVar6) {
        lVar8 = lVar6;
      }
      lVar8 = lVar8 >> 2;
      puVar7 = puVar12;
      puVar15 = puVar11;
      if (lVar8 != 0) {
        lVar6 = 0;
        do {
          uVar4 = *(uint *)(puVar12 + lVar6 * 4);
          *(uint *)(puVar11 + lVar6 * 4) =
               uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          lVar6 = lVar6 + 1;
        } while (lVar8 != lVar6);
        puVar7 = puVar12 + lVar8 * 4;
        puVar15 = puVar11 + lVar8 * 4;
      }
      *param_3 = (ulong)puVar7;
      uVar14 = 4;
      if (puVar7 != param_4) {
        uVar14 = (-(uint)(puVar2 < puVar15 + 4) & 0xfffffffe) + 7;
      }
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = puVar15;
        goto LAB_006d5778;
      }
      *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + 1;
      if ((*(byte *)(param_2 + 2) & 1) != 0) break;
      if (puVar15 <= puVar11) goto LAB_006d5766;
      local_48 = (undefined1 *)*param_2;
      FUN_0078e430(UNRECOVERED_JUMPTABLE);
      uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1 + 0x68,puVar1,&local_48,puVar15,0,param_6,0,param_8);
      if (uVar4 == 4) {
        if (uVar14 != 5) goto LAB_006d5766;
      }
      else {
        if (local_48 != puVar15) {
          lVar6 = 0;
          if (param_6 != (long *)0x0) {
            lVar6 = *param_6;
          }
          if (lVar6 == local_88) {
            *param_3 = *param_3 - ((long)puVar15 - (long)local_48);
          }
          else {
            lVar6 = (long)local_48 - (long)puVar11;
            if (lVar13 < (long)local_48 - (long)puVar11) {
              lVar6 = lVar13;
            }
            lVar13 = lVar6 + 3;
            if (-1 < lVar6) {
              lVar13 = lVar6;
            }
            lVar13 = lVar13 >> 2;
            puVar7 = puVar11;
            if (lVar13 != 0) {
              lVar6 = 0;
              do {
                uVar14 = *(uint *)(puVar12 + lVar6 * 4);
                *(uint *)(puVar11 + lVar6 * 4) =
                     uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                     uVar14 << 0x18;
                lVar6 = lVar6 + 1;
              } while (lVar13 != lVar6);
              puVar12 = puVar12 + lVar13 * 4;
              puVar7 = puVar11 + lVar13 * 4;
            }
            *param_3 = (ulong)puVar12;
            if ((puVar12 == param_4) || (puVar7 + 4 <= local_48)) {
              if (puVar7 == local_48) {
                    /* WARNING: Subroutine does not return */
                FUN_006e2220("nstatus == __GCONV_FULL_OUTPUT","../iconv/skeleton.c",0x2ea,
                             "__gconv_transform_internal_ucs4");
              }
LAB_006d5a7e:
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("outbuf == outerr","../iconv/skeleton.c",0x2e9,
                           "__gconv_transform_internal_ucs4");
            }
            if (puVar7 != local_48) goto LAB_006d5a7e;
            if (puVar7 == puVar11) {
              *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + -1;
            }
          }
        }
        uVar14 = uVar4;
        if (uVar4 != 0) goto LAB_006d5766;
      }
      puVar11 = (undefined1 *)*param_2;
    }
    *param_2 = puVar15;
LAB_006d5766:
    if ((uVar14 == 7) && (param_8 != 0)) {
      puVar11 = (undefined1 *)*param_3;
      uVar10 = (long)param_4 - (long)puVar11;
      if (4 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("cnt_after <= sizeof (data->__statep->__value.__wchb)","../iconv/skeleton.c",
                     0x31e,"__gconv_transform_internal_ucs4");
      }
      puVar3 = (uint *)param_2[4];
      if (uVar10 != 0) {
        *(undefined1 *)(puVar3 + 1) = *puVar11;
        if (((uVar10 != 1) && (*(undefined1 *)((long)puVar3 + 5) = puVar11[1], uVar10 != 2)) &&
           (*(undefined1 *)((long)puVar3 + 6) = puVar11[2], uVar10 == 4)) {
          *(undefined1 *)((long)puVar3 + 7) = puVar11[3];
        }
        local_4c = (uint)uVar10;
      }
      uVar4 = *puVar3;
      uVar14 = 7;
      *param_3 = (ulong)param_4;
      *puVar3 = uVar4 & 0xfffffff8 | local_4c;
    }
  }
  else {
    if (param_5 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("outbufstart == NULL","../iconv/skeleton.c",0x1a3,
                   "__gconv_transform_internal_ucs4");
    }
    uVar14 = 0;
    *(undefined8 *)param_2[4] = 0;
    if ((*(byte *)(param_2 + 2) & 1) == 0) {
      FUN_0078e430(UNRECOVERED_JUMPTABLE,puVar1,0);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x006d59ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (*UNRECOVERED_JUMPTABLE)(param_1 + 0x68,puVar1,0,0,0,param_6);
        return uVar10;
      }
      goto LAB_006d5abc;
    }
  }
LAB_006d5778:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar14;
  }
LAB_006d5abc:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

