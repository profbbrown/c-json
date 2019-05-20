# c-json
This is a JSON parser written in C. It has the following features and limitations.

* Ease of use is the primary goal. Performance is not a goal.
* Works with C strings only. The JSON document is not transformed into alternative data
structures. Almost all the functions return C strings that happen to contain a JSON document.
* The functions are read-only. This library does not allow for creation of JSON documents.
It is useful for parsing JSON documents that are generated elsewhere (such as from a RESTful
data source).
* Very little data is copied from the original JSON document. Most processing is done in-place.
Null characters may be inserted into the original JSON document to facilitate returning the JSON
elements within it. There is a function for removing all the extraneous nulls to restore the document
to its original state.
