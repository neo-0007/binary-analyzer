
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00784a40(ulong param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined *puVar11;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar8 = DAT_00939e68;
  uVar9 = DAT_00939e60;
  if (DAT_00939e68 == 0) {
    if ((DAT_0093eb28 != 0) && (puVar11 = PTR_DAT_0093eb60, PTR_DAT_0093eb60 != (undefined *)0x0)) {
      do {
        if (((*(ulong *)(puVar11 + 0x358) <= param_1) && (param_1 < *(ulong *)(puVar11 + 0x360))) &&
           (((puVar11[0x31e] & 4) != 0 || (iVar6 = FUN_0078d990(puVar11,param_1), iVar6 != 0)))) {
          if (*(long *)(puVar11 + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006e2220("ns == l->l_ns","dl-find_object.c",0x2d,"_dl_find_object_slow");
          }
          FUN_00784840(puVar11,&local_38);
          *param_2 = 0;
          param_2[1] = local_38;
          param_2[2] = uStack_30;
          param_2[3] = local_28;
          param_2[4] = uStack_20;
          return 1;
        }
        plVar1 = (long *)(puVar11 + 0x18);
        puVar11 = (undefined *)*plVar1;
      } while ((undefined *)*plVar1 != (undefined *)0x0);
    }
  }
  else {
    if ((DAT_00939e60 <= param_1) && (param_1 < DAT_00939e68)) {
      *param_2 = 0;
      param_2[1] = uVar9;
      param_2[2] = uVar8;
      uVar5 = _UNK_00939e78;
      param_2[3] = _DAT_00939e70;
      param_2[4] = uVar5;
      return 0;
    }
    if ((*DAT_00939e40 <= param_1) && (param_1 < DAT_00939e50)) {
      puVar7 = DAT_00939e40;
      uVar9 = DAT_00939e48;
      if (DAT_00939e48 != 0) {
        do {
          while( true ) {
            uVar8 = uVar9 >> 1;
            if (puVar7[uVar8 * 4] < param_1) break;
            uVar9 = uVar8;
            if (uVar8 == 0) goto LAB_00784c48;
          }
          puVar7 = puVar7 + uVar8 * 4 + 4;
          uVar9 = (uVar9 - 1) - uVar8;
        } while (uVar9 != 0);
      }
LAB_00784c48:
      if ((DAT_00939e40 + DAT_00939e48 * 4 == puVar7) || (param_1 != *puVar7)) {
        uVar9 = puVar7[-3];
        puVar7 = puVar7 + -4;
      }
      else {
        uVar9 = puVar7[1];
      }
      if (param_1 < uVar9) {
        uVar9 = *puVar7;
        uVar8 = puVar7[1];
        *param_2 = 0;
        param_2[1] = uVar9;
        param_2[2] = uVar8;
        uVar9 = puVar7[3];
        param_2[3] = puVar7[2];
        param_2[4] = uVar9;
        return 0;
      }
    }
    for (puVar2 = (undefined8 *)(&DAT_0094ada0)[(uint)DAT_0094ad90 & 1];
        (puVar2 != (undefined8 *)0x0 && (uVar9 = puVar2[2], uVar9 != 0));
        puVar2 = (undefined8 *)*puVar2) {
      puVar7 = puVar2 + 4;
      if ((ulong)puVar2[4] <= param_1) {
        puVar10 = puVar7 + uVar9 * 4;
        do {
          uVar8 = uVar9 >> 1;
          if (puVar7[uVar8 * 4] < param_1) {
            puVar7 = puVar7 + uVar8 * 4 + 4;
            uVar8 = (uVar9 - 1) - uVar8;
          }
          uVar9 = uVar8;
        } while (uVar9 != 0);
        if ((puVar10 == puVar7) || (param_1 != *puVar7)) {
          uVar9 = puVar7[-3];
          puVar10 = puVar7 + -3;
          puVar7 = puVar7 + -4;
        }
        else {
          puVar10 = puVar7 + 1;
          uVar9 = puVar7[1];
        }
        if (uVar9 <= param_1) {
          return 0xffffffff;
        }
        uVar9 = *puVar7;
        uVar8 = *puVar10;
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        *param_2 = 0;
        param_2[1] = uVar9;
        param_2[2] = uVar8;
        param_2[3] = uVar3;
        param_2[4] = uVar4;
        return 0;
      }
    }
  }
  return 0xffffffff;
}

