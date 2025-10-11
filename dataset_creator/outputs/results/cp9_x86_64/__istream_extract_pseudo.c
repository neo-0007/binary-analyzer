
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__istream_extract(std::istream&, char*, long) */

void std::__istream_extract(istream *param_1,char *param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  void *__src;
  int iVar3;
  ctype *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  size_t __n;
  long lVar10;
  uint uVar11;
  long lVar12;
  long in_FS_OFFSET;
  long local_70;
  char *local_68;
  sentry local_49;
  locale local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  istream::sentry::sentry(&local_49,param_1,false);
  lVar9 = *(long *)param_1;
  if (local_49 == (sentry)0x0) {
    uVar11 = 4;
    goto LAB_006b0285;
  }
  lVar12 = *(long *)(param_1 + *(long *)(lVar9 + -0x18) + 0x10);
  if ((lVar12 < 1) || (param_3 <= lVar12)) {
    lVar12 = param_3;
  }
  locale::locale(local_48,(locale *)(param_1 + *(long *)(lVar9 + -0x18) + 0xd0));
                    /* try { // try from 006b017d to 006b0181 has its CatchHandler @ 006b0494 */
  pcVar4 = use_facet<std::ctype<char>>(local_48);
  locale::~locale(local_48);
  plVar2 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xe8);
  if ((byte *)plVar2[2] < (byte *)plVar2[3]) {
    uVar7 = (ulong)*(byte *)plVar2[2];
    if (0 < lVar12 + -1) {
LAB_006b01c0:
      local_70 = lVar12 + -1;
      lVar10 = 0;
LAB_006b01c8:
      do {
        if ((*(byte *)(*(long *)(pcVar4 + 0x30) + 1 + (uVar7 & 0xff) * 2) & 0x20) != 0) {
          *param_2 = '\0';
          lVar9 = *(long *)param_1;
          uVar11 = 4;
          *(undefined8 *)(param_1 + *(long *)(lVar9 + -0x18) + 0x10) = 0;
          if (lVar10 != 0) goto LAB_006b0294;
          goto LAB_006b0285;
        }
        __src = (void *)plVar2[2];
        lVar9 = (lVar12 - lVar10) + -1;
        lVar8 = plVar2[3] - (long)__src;
        if (lVar8 < lVar9) {
          lVar9 = lVar8;
        }
        if (lVar9 < 2) {
          *param_2 = (char)uVar7;
          param_2 = param_2 + 1;
          lVar10 = lVar10 + 1;
          pbVar6 = (byte *)plVar2[3];
          if ((byte *)plVar2[2] < pbVar6) {
            pbVar5 = (byte *)plVar2[2] + 1;
            plVar2[2] = (long)pbVar5;
LAB_006b02fb:
            if (pbVar6 <= pbVar5) {
              uVar7 = (**(code **)(*plVar2 + 0x48))(plVar2);
              goto LAB_006b0366;
            }
            bVar1 = *pbVar5;
            goto LAB_006b0253;
          }
          iVar3 = (**(code **)(*plVar2 + 0x50))(plVar2);
          if (iVar3 != -1) {
            pbVar5 = (byte *)plVar2[2];
            pbVar6 = (byte *)plVar2[3];
            goto LAB_006b02fb;
          }
          local_68 = param_2;
          if (local_70 <= lVar10) {
LAB_006b025e:
            *param_2 = '\0';
            *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x10) = 0;
            goto LAB_006b0294;
          }
          break;
        }
        pbVar6 = (byte *)((long)__src + 1);
        if (pbVar6 < (byte *)(lVar9 + (long)__src)) {
          do {
            if ((*(byte *)(*(long *)(pcVar4 + 0x30) + 1 + (ulong)*pbVar6 * 2) & 0x20) != 0) break;
            pbVar6 = pbVar6 + 1;
          } while ((byte *)(lVar9 + (long)__src) != pbVar6);
          __n = (long)pbVar6 - (long)__src;
          if (__n != 0) goto LAB_006b0320;
          plVar2[2] = (long)pbVar6;
          if ((byte *)plVar2[3] <= pbVar6) goto LAB_006b035d;
LAB_006b0250:
          bVar1 = *pbVar6;
LAB_006b0253:
          uVar7 = (ulong)bVar1;
          if (local_70 <= lVar10) goto LAB_006b025e;
          goto LAB_006b01c8;
        }
        __n = 1;
LAB_006b0320:
        memcpy(param_2,__src,__n);
        pbVar6 = (byte *)(plVar2[2] + __n);
        param_2 = param_2 + __n;
        plVar2[2] = (long)pbVar6;
        lVar10 = lVar10 + __n;
        if (pbVar6 < (byte *)plVar2[3]) goto LAB_006b0250;
LAB_006b035d:
                    /* try { // try from 006b0363 to 006b0408 has its CatchHandler @ 006b04a3 */
        uVar7 = (**(code **)(*plVar2 + 0x48))(plVar2);
LAB_006b0366:
        if (local_70 <= lVar10) goto LAB_006b025e;
        local_68 = param_2;
      } while ((int)uVar7 != -1);
      *local_68 = '\0';
      lVar9 = *(long *)param_1;
      uVar11 = (-(uint)(lVar10 == 0) & 4) + 2;
      *(undefined8 *)(param_1 + *(long *)(lVar9 + -0x18) + 0x10) = 0;
      goto LAB_006b0285;
    }
  }
  else {
                    /* try { // try from 006b0419 to 006b041b has its CatchHandler @ 006b0485 */
    uVar7 = (**(code **)(*plVar2 + 0x48))(plVar2);
    if (0 < lVar12 + -1) {
      if ((int)uVar7 == -1) {
        *param_2 = '\0';
        lVar9 = *(long *)param_1;
        uVar11 = 6;
        *(undefined8 *)(param_1 + *(long *)(lVar9 + -0x18) + 0x10) = 0;
        goto LAB_006b0285;
      }
      goto LAB_006b01c0;
    }
  }
  *param_2 = '\0';
  lVar9 = *(long *)param_1;
  uVar11 = 4;
  *(undefined8 *)(param_1 + *(long *)(lVar9 + -0x18) + 0x10) = 0;
LAB_006b0285:
  ios::clear((ios *)(param_1 + *(long *)(lVar9 + -0x18)),
             uVar11 | *(uint *)((ios *)(param_1 + *(long *)(lVar9 + -0x18)) + 0x20));
LAB_006b0294:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

