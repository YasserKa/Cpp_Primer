/**
 * (a) *iter++; deref then inc pointer
 * (b) (*iter)++; same as above
 * (c) *iter.empty() error since iter doesn't have empty() member
 * (d) iter->empty(); same as (*iter)->empty() deref then call empty()
 * (e) ++*iter; deref then incr the object
 * (f) iter++->empty(); deref then call empty() then incr iter
 */

