
ulong __readvall(int param_1,iovec *param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  size_t *psVar5;
  iovec *piVar6;
  ulong uVar7;
  uint uVar8;
  size_t sVar9;
  undefined1 **ppuVar10;
  undefined1 **ppuVar11;
  ulong uVar13;
  long in_FS_OFFSET;
  long lVar14;
  long lVar15;
  undefined1 *local_58;
  iovec *local_50;
  long local_40;
  undefined1 **ppuVar12;
  
  ppuVar12 = &local_58;
  ppuVar11 = &local_58;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    uVar4 = readv(param_1,param_2,param_3);
    if (uVar4 != 0xffffffffffffffff) {
      if (0 < (long)uVar4) goto LAB_00778dc2;
      ppuVar10 = &local_58;
      if (uVar4 == 0) goto LAB_00778e3c;
      iVar3 = *(int *)(in_FS_OFFSET + -0x58);
      break;
    }
    iVar3 = *(int *)(in_FS_OFFSET + -0x58);
  } while (iVar3 == 4);
  ppuVar10 = &local_58;
  if (iVar3 == 0xb) {
    uVar4 = 0;
LAB_00778dc2:
    ppuVar10 = &local_58;
    if (0 < param_3) {
      uVar8 = param_3 - 1;
      if (uVar8 < 2) {
        uVar8 = 0;
        lVar14 = 0;
      }
      else {
        psVar5 = &param_2->iov_len;
        lVar14 = 0;
        lVar15 = 0;
        do {
          sVar9 = *psVar5;
          plVar1 = (long *)(psVar5 + 2);
          psVar5 = psVar5 + 4;
          lVar14 = lVar14 + sVar9;
          lVar15 = lVar15 + *plVar1;
        } while (psVar5 != &param_2[(ulong)((uVar8 >> 1) - 1) * 2 + 2].iov_len);
        uVar8 = uVar8 & 0xfffffffe;
        lVar14 = lVar14 + lVar15;
      }
      uVar13 = lVar14 + param_2[(int)uVar8].iov_len;
      if ((int)(uVar8 + 1) < param_3) {
        uVar13 = uVar13 + param_2[(long)(int)uVar8 + 1].iov_len;
      }
      ppuVar10 = &local_58;
      if (uVar4 < uVar13) {
        sVar9 = (long)param_3 << 4;
        ppuVar10 = &local_58;
        while (ppuVar12 != (undefined1 **)((long)&local_58 - (sVar9 & 0xfffffffffffff000))) {
          ppuVar11 = (undefined1 **)((long)ppuVar10 + -0x1000);
          *(undefined8 *)((long)ppuVar10 + -8) = *(undefined8 *)((long)ppuVar10 + -8);
          ppuVar12 = (undefined1 **)((long)ppuVar10 + -0x1000);
          ppuVar10 = (undefined1 **)((long)ppuVar10 + -0x1000);
        }
        uVar7 = (ulong)((uint)sVar9 & 0xfff);
        lVar14 = -uVar7;
        if (uVar7 != 0) {
          *(undefined8 *)((long)ppuVar11 + -8) = *(undefined8 *)((long)ppuVar11 + -8);
        }
        *(undefined8 *)((long)ppuVar11 + lVar14 + -8) = 0x778eda;
        local_50 = (iovec *)&local_58;
        piVar6 = (iovec *)memcpy((undefined1 *)((long)ppuVar11 + lVar14),param_2,sVar9);
        local_58 = (undefined1 *)local_50;
        local_50 = piVar6;
        uVar7 = uVar4;
        do {
          for (; uVar2 = local_50->iov_len, uVar2 <= uVar7; local_50 = local_50 + 1) {
            uVar7 = uVar7 - uVar2;
            param_3 = param_3 + -1;
          }
          local_50->iov_base = (void *)((long)local_50->iov_base + uVar7);
          local_50->iov_len = uVar2 - uVar7;
LAB_00778ef4:
          *(undefined8 *)((long)ppuVar11 + lVar14 + -8) = 0x778f09;
          uVar7 = readv(param_1,local_50,param_3);
          if (uVar7 == 0xffffffffffffffff) goto LAB_00778f4c;
          ppuVar10 = (undefined1 **)local_58;
          if ((long)uVar7 < 1) {
            if (uVar7 != 0) {
              iVar3 = *(int *)(in_FS_OFFSET + -0x58);
              goto LAB_00778f5b;
            }
            break;
          }
          uVar4 = uVar4 + uVar7;
        } while (uVar4 < uVar13);
      }
    }
  }
LAB_00778e3c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)ppuVar10 + -8) = &UNK_00778fc2;
  __stack_chk_fail_local();
LAB_00778f4c:
  iVar3 = *(int *)(in_FS_OFFSET + -0x58);
  if (iVar3 != 4) {
LAB_00778f5b:
    if (iVar3 == 0xb) {
      *(undefined8 *)((long)ppuVar11 + lVar14 + -8) = 0x778f89;
      iVar3 = wait_on_socket(param_1,200);
      if (0 < iVar3) goto LAB_00778ef4;
    }
    ppuVar10 = (undefined1 **)local_58;
    if ((long)uVar7 < 0) {
      uVar4 = uVar7;
    }
    goto LAB_00778e3c;
  }
  goto LAB_00778ef4;
}

