
ulong file_ctrl(BIO *param_1,int param_2,ulong param_3,bio_st *param_4)

{
  int iVar1;
  FILE *pFVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  char local_34 [4];
  long local_30;
  
  pFVar2 = (FILE *)param_1->prev_bio;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)param_3;
  if (param_2 < 0xd) {
    switch(param_2) {
    case 1:
switchD_004ad777_caseD_1:
      iVar1 = fseek(pFVar2,param_3,0);
      uVar6 = (ulong)iVar1;
      break;
    case 2:
      iVar1 = feof(pFVar2);
      uVar6 = (ulong)iVar1;
      break;
    case 3:
switchD_004ad777_caseD_3:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = ftell(pFVar2);
        return uVar6;
      }
      goto LAB_004adaf4;
    default:
switchD_004ad777_caseD_4:
      uVar6 = 0;
      break;
    case 8:
      uVar6 = (ulong)*(int *)&param_1->field_0x2c;
      break;
    case 9:
      *(uint *)&param_1->field_0x2c = uVar5;
      uVar6 = 1;
      break;
    case 0xb:
      iVar1 = fflush(pFVar2);
      if (iVar1 != -1) goto switchD_004ad777_caseD_c;
      ERR_new();
      ERR_set_debug("../crypto/bio/bss_file.c",0x146,"file_ctrl");
      piVar3 = __errno_location();
      ERR_set_error(2,*piVar3,"calling fflush()");
      ERR_new();
      uVar4 = 0x148;
LAB_004ad9ea:
      uVar6 = 0;
      ERR_set_debug("../crypto/bio/bss_file.c",uVar4,"file_ctrl");
      ERR_set_error(0x20,0x80002,0);
      break;
    case 0xc:
switchD_004ad777_caseD_c:
      uVar6 = 1;
    }
  }
  else {
    switch(param_2) {
    case 0x6a:
      if (((*(int *)&param_1->field_0x2c != 0) && (param_1->num != 0)) && (pFVar2 != (FILE *)0x0)) {
        fclose(pFVar2);
        *(undefined4 *)&param_1->ptr = 0;
      }
      param_1->prev_bio = param_4;
      *(uint *)&param_1->field_0x2c = uVar5 & 1;
      uVar6 = 1;
      param_1->num = 1;
      break;
    case 0x6b:
      if (param_4 == (bio_st *)0x0) goto switchD_004ad777_caseD_c;
      param_4->method = (BIO_METHOD *)pFVar2;
      uVar6 = 1;
      break;
    case 0x6c:
      if (*(int *)&param_1->field_0x2c != 0) {
        if ((param_1->num != 0) && (pFVar2 != (FILE *)0x0)) {
          fclose(pFVar2);
          param_1->prev_bio = (bio_st *)0x0;
          *(undefined4 *)&param_1->ptr = 0;
        }
        param_1->num = 0;
      }
      *(uint *)&param_1->field_0x2c = uVar5 & 1;
      if ((param_3 & 8) == 0) {
        if ((uVar5 & 6) == 6) {
          OPENSSL_strlcpy(local_34,&DAT_007de8cc,4);
        }
        else if ((param_3 & 4) == 0) {
          uVar6 = (ulong)(uVar5 & 2);
          if ((param_3 & 2) == 0) {
            ERR_new();
            ERR_set_debug("../crypto/bio/bss_file.c",0x11a,"file_ctrl");
            ERR_set_error(0x20,0x65,0);
            break;
          }
          OPENSSL_strlcpy(local_34,"r",4);
        }
        else {
          OPENSSL_strlcpy(local_34,&DAT_00817eff,4);
        }
      }
      else if ((param_3 & 2) == 0) {
        OPENSSL_strlcpy(local_34,"a",4);
      }
      else {
        OPENSSL_strlcpy(local_34,&DAT_007de8c9,4);
      }
      pFVar2 = openssl_fopen((char *)param_4,local_34);
      if (pFVar2 == (FILE *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/bio/bss_file.c",0x129,"file_ctrl");
        piVar3 = __errno_location();
        ERR_set_error(2,*piVar3,"calling fopen(%s, %s)",param_4,local_34);
        ERR_new();
        uVar4 = 300;
        goto LAB_004ad9ea;
      }
      param_1->prev_bio = (bio_st *)pFVar2;
      uVar6 = 1;
      param_1->num = 1;
      BIO_clear_flags(param_1,0);
      break;
    default:
      goto switchD_004ad777_caseD_4;
    case 0x80:
      goto switchD_004ad777_caseD_1;
    case 0x85:
      goto switchD_004ad777_caseD_3;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_004adaf4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

