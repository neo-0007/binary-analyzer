
void msort_with_tmp_part_0(size_t *param_1,undefined8 *param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *__dest;
  undefined8 *puVar8;
  undefined8 *__src;
  undefined8 *puVar9;
  undefined8 *puVar10;
  size_t sVar11;
  ulong uVar12;
  undefined8 *puVar13;
  code *local_78;
  size_t local_58;
  ulong local_50;
  
  local_50 = param_3 >> 1;
  uVar4 = param_3 - local_50;
  __src = (undefined8 *)((long)param_2 + *param_1 * local_50);
  if (local_50 != 1) {
    msort_with_tmp_part_0(param_1,param_2,local_50);
  }
  puVar8 = param_2;
  puVar9 = param_2;
  if (uVar4 < 2) {
    local_58 = *param_1;
    __dest = (undefined8 *)param_1[4];
    sVar11 = param_1[3];
    local_78 = (code *)param_1[2];
    uVar7 = param_1[1];
    uVar12 = local_50;
    puVar13 = __dest;
    if (uVar7 == 2) {
      puVar10 = __dest;
      if (uVar4 != 0) goto LAB_006deeb0;
    }
    else if (uVar7 < 3) {
      if (uVar7 == 0) {
        if (uVar4 != 0) {
          uVar4 = 1;
          goto LAB_006dede0;
        }
      }
      else if (uVar4 != 0) goto LAB_006decb0;
    }
    else if (uVar7 == 3) {
      if (uVar4 != 0) {
        uVar4 = 1;
        goto LAB_006ded30;
      }
    }
    else if (uVar4 != 0) goto LAB_006dee57;
  }
  else {
    msort_with_tmp_part_0(param_1,__src,uVar4);
    local_58 = *param_1;
    __dest = (undefined8 *)param_1[4];
    uVar7 = param_1[1];
    local_78 = (code *)param_1[2];
    sVar11 = param_1[3];
    puVar10 = __dest;
    if (uVar7 == 2) {
LAB_006deeb0:
      do {
        puVar13 = (undefined8 *)((long)puVar10 + local_58);
        iVar3 = (*local_78)(puVar9,__src,sVar11);
        if (iVar3 < 1) {
          local_50 = local_50 - 1;
          puVar8 = (undefined8 *)((long)puVar9 + local_58);
          puVar6 = puVar9;
        }
        else {
          uVar4 = uVar4 - 1;
          puVar6 = __src;
          __src = (undefined8 *)((long)__src + local_58);
          puVar8 = puVar9;
        }
        if (__dest < puVar13) {
          puVar9 = puVar6 + 1;
          uVar7 = (long)puVar13 + (-1 - (long)__dest);
          if ((puVar9 == __dest) || (uVar7 < 0x18)) {
            while( true ) {
              *puVar10 = puVar9[-1];
              if (puVar13 <= puVar10 + 1) break;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
          }
          else {
            lVar5 = 0;
            uVar7 = (uVar7 >> 3) + 1;
            do {
              uVar2 = ((undefined8 *)((long)puVar6 + lVar5))[1];
              *(undefined8 *)((long)puVar10 + lVar5) = *(undefined8 *)((long)puVar6 + lVar5);
              ((undefined8 *)((long)puVar10 + lVar5))[1] = uVar2;
              lVar5 = lVar5 + 0x10;
            } while ((uVar7 >> 1) * 0x10 != lVar5);
            uVar12 = uVar7 & 0xfffffffffffffffe;
            if (uVar12 != uVar7) {
              puVar10[uVar12] = puVar6[uVar12];
            }
          }
        }
        __dest = (undefined8 *)((long)__dest + local_58);
      } while ((local_50 != 0) && (puVar9 = puVar8, puVar10 = puVar13, uVar4 != 0));
    }
    else if (uVar7 < 3) {
      if (uVar7 == 0) {
LAB_006dede0:
        do {
          while (iVar3 = (*local_78)(puVar8,__src,sVar11), 0 < iVar3) {
            uVar1 = *(undefined4 *)__src;
            puVar13 = (undefined8 *)((long)__dest + 4);
            __src = (undefined8 *)((long)__src + 4);
            *(undefined4 *)__dest = uVar1;
            uVar4 = uVar4 - 1;
            uVar12 = param_3;
            __dest = puVar13;
            if (uVar4 == 0) goto LAB_006dece2;
          }
          uVar1 = *(undefined4 *)puVar8;
          puVar13 = (undefined8 *)((long)__dest + 4);
          puVar8 = (undefined8 *)((long)puVar8 + 4);
          *(undefined4 *)__dest = uVar1;
          local_50 = local_50 - 1;
          __dest = puVar13;
        } while (local_50 != 0);
      }
      else {
LAB_006decb0:
        do {
          while (iVar3 = (*local_78)(puVar8,__src,sVar11), 0 < iVar3) {
            uVar2 = *__src;
            puVar13 = __dest + 1;
            __src = __src + 1;
            *__dest = uVar2;
            uVar4 = uVar4 - 1;
            uVar12 = param_3;
            __dest = puVar13;
            if (uVar4 == 0) goto LAB_006dece2;
          }
          uVar2 = *puVar8;
          puVar13 = __dest + 1;
          puVar8 = puVar8 + 1;
          *__dest = uVar2;
          local_50 = local_50 - 1;
          __dest = puVar13;
        } while (local_50 != 0);
      }
    }
    else if (uVar7 == 3) {
LAB_006ded30:
      do {
        while (iVar3 = (*local_78)(*puVar8,*__src,sVar11), 0 < iVar3) {
          uVar2 = *__src;
          puVar13 = __dest + 1;
          __src = __src + 1;
          *__dest = uVar2;
          uVar4 = uVar4 - 1;
          uVar12 = param_3;
          __dest = puVar13;
          if (uVar4 == 0) goto LAB_006dece2;
        }
        uVar2 = *puVar8;
        puVar13 = __dest + 1;
        puVar8 = puVar8 + 1;
        *__dest = uVar2;
        local_50 = local_50 - 1;
        __dest = puVar13;
      } while (local_50 != 0);
    }
    else {
LAB_006dee57:
      do {
        iVar3 = (*local_78)(puVar8,__src,sVar11);
        if (iVar3 < 1) {
          local_50 = local_50 - 1;
          puVar13 = (undefined8 *)mempcpy(__dest,puVar8,local_58);
          puVar8 = (undefined8 *)((long)puVar8 + local_58);
          puVar9 = __src;
        }
        else {
          puVar9 = (undefined8 *)((long)__src + local_58);
          uVar4 = uVar4 - 1;
          puVar13 = (undefined8 *)mempcpy(__dest,__src,local_58);
        }
      } while ((local_50 != 0) && (__src = puVar9, __dest = puVar13, uVar4 != 0));
    }
    uVar12 = param_3 - uVar4;
    if (local_50 == 0) goto LAB_006decf6;
  }
LAB_006dece2:
  memcpy(puVar13,puVar8,local_58 * local_50);
LAB_006decf6:
  memcpy(param_2,(void *)param_1[4],local_58 * uVar12);
  return;
}

