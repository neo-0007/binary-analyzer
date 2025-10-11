
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _dl_find_object(ulong param_1,undefined8 *param_2)

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
  
  uVar8 = _DAT_0092ce68;
  uVar9 = _dlfo_main;
  if (_DAT_0092ce68 == 0) {
    if ((_dl_nns != 0) && (puVar11 = _dl_ns, _dl_ns != (undefined *)0x0)) {
      do {
        if (((*(ulong *)(puVar11 + 0x358) <= param_1) && (param_1 < *(ulong *)(puVar11 + 0x360))) &&
           (((puVar11[0x31e] & 4) != 0 ||
            (iVar6 = _dl_addr_inside_object(puVar11,param_1), iVar6 != 0)))) {
          if (*(long *)(puVar11 + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("ns == l->l_ns","dl-find_object.c",0x2d,"_dl_find_object_slow");
          }
          _dl_find_object_from_map(puVar11,&local_38);
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
    if ((_dlfo_main <= param_1) && (param_1 < _DAT_0092ce68)) {
      *param_2 = 0;
      param_2[1] = uVar9;
      param_2[2] = uVar8;
      uVar5 = _UNK_0092ce78;
      param_2[3] = _DAT_0092ce70;
      param_2[4] = uVar5;
      return 0;
    }
    if ((*_dlfo_nodelete_mappings <= param_1) && (param_1 < _dlfo_nodelete_mappings_end)) {
      puVar7 = _dlfo_nodelete_mappings;
      uVar9 = _dlfo_nodelete_mappings_size;
      if (_dlfo_nodelete_mappings_size != 0) {
        do {
          while( true ) {
            uVar8 = uVar9 >> 1;
            if (puVar7[uVar8 * 4] < param_1) break;
            uVar9 = uVar8;
            if (uVar8 == 0) goto LAB_0077b318;
          }
          puVar7 = puVar7 + uVar8 * 4 + 4;
          uVar9 = (uVar9 - 1) - uVar8;
        } while (uVar9 != 0);
      }
LAB_0077b318:
      if ((_dlfo_nodelete_mappings + _dlfo_nodelete_mappings_size * 4 == puVar7) ||
         (param_1 != *puVar7)) {
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
    for (puVar2 = (undefined8 *)(&_dlfo_loaded_mappings)[(uint)_dlfo_loaded_mappings_version & 1];
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

