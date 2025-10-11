
ulong sock_ctrl(BIO *param_1,int param_2,bio_st *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = (int)param_3;
  if (0x4c < param_2) {
    if (param_2 == 0x68) {
      if ((param_1 != (BIO *)0x0) && (*(int *)&param_1->field_0x2c != 0)) {
        if (param_1->num != 0) {
          BIO_closesocket(*(undefined4 *)&param_1->next_bio);
        }
        param_1->num = 0;
        *(undefined4 *)&param_1->ptr = 0;
      }
      uVar1 = *param_4;
      *(int *)&param_1->field_0x2c = iVar2;
      param_1->num = 1;
      *(undefined4 *)&param_1->next_bio = uVar1;
      return 1;
    }
    if (param_2 == 0x69) {
      if (param_1->num != 0) {
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = *(undefined4 *)&param_1->next_bio;
        }
        return (long)*(int *)&param_1->next_bio;
      }
      return 0xffffffffffffffff;
    }
    goto switchD_004add51_caseD_3;
  }
  if (param_2 < 2) {
    return 0;
  }
  switch(param_2) {
  case 2:
    uVar3 = (ulong)(*(uint *)&param_1->ptr >> 0xb & 1);
    break;
  case 8:
    uVar3 = (ulong)*(int *)&param_1->field_0x2c;
    break;
  case 9:
    *(int *)&param_1->field_0x2c = iVar2;
    uVar3 = 1;
    break;
  case 0xb:
  case 0xc:
    uVar3 = 1;
    break;
  case 0x48:
    iVar2 = setsockopt(*(int *)&param_1->next_bio,0x11a,(iVar2 == 0) + 1,param_4,param_4[0xe]);
    uVar3 = 0;
    if (iVar2 == 0) {
      BIO_set_flags(param_1,(-(uint)(param_3 == (bio_st *)0x0) & 0xffffe000) + 0x4000);
      uVar3 = 1;
    }
    break;
  case 0x49:
    iVar2 = 0x4000;
    goto LAB_004addc5;
  case 0x4a:
    BIO_set_flags(param_1,0x1000);
    param_1->prev_bio = param_3;
  default:
switchD_004add51_caseD_3:
    uVar3 = 0;
    break;
  case 0x4b:
    BIO_clear_flags(param_1,0x1000);
    uVar3 = 0;
    break;
  case 0x4c:
    iVar2 = 0x2000;
LAB_004addc5:
    iVar2 = BIO_test_flags(param_1,iVar2);
    return (ulong)(iVar2 != 0);
  }
  return uVar3;
}

