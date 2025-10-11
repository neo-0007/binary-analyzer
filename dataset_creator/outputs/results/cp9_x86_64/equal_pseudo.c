
/* std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t>
   >::equal(std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > const&) const */

bool __thiscall
std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
          (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *this,istreambuf_iterator *param_1
          )

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  
  plVar1 = *(long **)this;
  bVar2 = plVar1 != (long *)0x0 && *(int *)(this + 8) == -1;
  bVar5 = *(int *)(this + 8) == -1;
  if (bVar2) {
    if ((int *)plVar1[2] < (int *)plVar1[3]) {
      iVar4 = *(int *)plVar1[2];
    }
    else {
      iVar4 = (**(code **)(*plVar1 + 0x48))();
    }
    bVar5 = false;
    if (iVar4 == -1) {
      *(undefined8 *)this = 0;
      bVar5 = bVar2;
    }
  }
  plVar1 = *(long **)param_1;
  bVar3 = plVar1 != (long *)0x0 && *(int *)(param_1 + 8) == -1;
  bVar2 = *(int *)(param_1 + 8) == -1;
  if (bVar3) {
    if ((int *)plVar1[2] < (int *)plVar1[3]) {
      iVar4 = *(int *)plVar1[2];
    }
    else {
      iVar4 = (**(code **)(*plVar1 + 0x48))();
    }
    bVar2 = false;
    if (iVar4 == -1) {
      *(undefined8 *)param_1 = 0;
      bVar2 = bVar3;
    }
  }
  return bVar5 == bVar2;
}

