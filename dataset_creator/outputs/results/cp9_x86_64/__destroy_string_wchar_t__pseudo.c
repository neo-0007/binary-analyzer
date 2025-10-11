
/* void std::__facet_shims::(anonymous namespace)::__destroy_string<wchar_t>(void*) */

void std::__facet_shims::(anonymous_namespace)::__destroy_string<wchar_t>(void *param_1)

{
                    /* WARNING: Load size is inaccurate */
  if (*param_1 != (void *)((long)param_1 + 0x10)) {
    operator_delete(*param_1);
    return;
  }
  return;
}

