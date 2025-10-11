
/* std::money_base::_S_construct_pattern(char, char, char) */

undefined4 std::money_base::_S_construct_pattern(char param_1,char param_2,char param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = param_2;
  if (param_3 == '\x03') {
    if (param_1 == '\0') {
      param_3 = '\x04';
      cVar1 = '\x03' - (param_2 == '\0');
      if (param_2 != '\0') {
        cVar3 = '\x02';
      }
      cVar2 = (-(param_2 == '\0') & 2U) + 1;
    }
    else {
      cVar2 = '\x02';
      if (param_2 != '\0') {
        cVar3 = '\x04';
      }
      cVar1 = (-(param_2 == '\0') & 3U) + 1;
    }
    goto LAB_00627f7e;
  }
  if (param_3 < '\x04') {
    if (param_3 == '\x02') {
      if (param_2 == '\0') {
        cVar2 = '\x04';
        if (param_1 == '\0') {
          cVar2 = '\x02';
        }
        param_3 = (-(param_1 == '\0') & 2U) + 2;
        cVar1 = '\x03';
      }
      else {
        cVar2 = '\x01';
        cVar1 = '\x04';
        if (param_1 == '\0') {
          cVar1 = '\x02';
        }
        param_3 = (-(param_1 == '\0') & 2U) + 2;
        cVar3 = '\x03';
      }
      goto LAB_00627f7e;
    }
    if (-1 < param_3) {
      if (param_2 == '\0') {
        param_3 = '\x03';
        cVar1 = (-(param_1 == '\0') & 0xfeU) + 4;
        cVar2 = (-(param_1 == '\0') & 2U) + 2;
      }
      else {
        cVar1 = '\x01';
        param_3 = '\x03';
        cVar2 = (-(param_1 == '\0') & 2U) + 2;
        cVar3 = (-(param_1 == '\0') & 0xfeU) + 4;
      }
      goto LAB_00627f7e;
    }
  }
  else if (param_3 == '\x04') {
    if (param_1 == '\0') {
      if (param_2 != '\0') {
        cVar3 = '\x03';
      }
      cVar1 = '\x03' - (param_2 != '\0');
      cVar2 = '\x02' - (param_2 != '\0');
    }
    else {
      cVar2 = '\x03';
      if (param_2 != '\0') {
        cVar3 = '\x04';
      }
      param_3 = '\x02';
      cVar1 = (-(param_2 == '\0') & 3U) + 1;
    }
    goto LAB_00627f7e;
  }
  cVar1 = '\0';
  cVar2 = '\0';
  param_3 = '\0';
  cVar3 = '\0';
LAB_00627f7e:
  return CONCAT13(cVar3,CONCAT12(cVar1,CONCAT11(cVar2,param_3)));
}

